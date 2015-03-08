//
//  TSNLogger.h
//  TSNThali
//
//  Created by Brian Lambert on 3/8/15.
//  Copyright (c) 2015 Softwarenerd. All rights reserved.
//

#import <UIKit/UIKit.h>

// TSNLogger interface.
@interface TSNLogger : NSObject

// Properties.
@property (nonatomic) NSUInteger maxLogEntries;
@property (nonatomic) BOOL writeToAppleSystemLog;

// Class singleton.
+ (instancetype)singleton;

// Appends a log entry.
- (void)appendLogEntry:(NSString *)logEntry;

// Creates a logger view with the specified frame and colors. The logger view will display log entries from TSNLogger,
// including log entries which were appended to TSNLogger to before the logger view was created. The logger view will
// display, at most, the number of log entries specified in the maxLogEntries property.
- (UIView *)createLoggerViewWithFrame:(CGRect)frame
                      backgroundColor:(UIColor *)backgroundColor
                      foregroundColor:(UIColor *)foregroundColor;

@end

// Convenience C function to append a log entry to the TSNLogger.
static inline void TSNLog(NSString * format, ...)
{
    // Format the log entry.
    va_list args;
    va_start(args, format);
    NSString * formattedString = [[NSString alloc] initWithFormat:format
                                                        arguments:args];
    va_end(args);
    [[TSNLogger singleton] appendLogEntry:formattedString];
}
