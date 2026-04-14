@class NSDateFormatter;

@interface StdoutLoggingFormatter : TMLoggingFormatter {
    NSDateFormatter *dateFormatter;
}

+ (id)formatter;

- (void).cxx_destruct;
- (id)init;
- (id)stringForRecord:(id)a0;

@end
