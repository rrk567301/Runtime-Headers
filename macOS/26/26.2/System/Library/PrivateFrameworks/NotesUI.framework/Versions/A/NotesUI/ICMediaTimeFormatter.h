@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)timecodeFormatter;
+ (id)wordyFormatter;

- (id)stringFromTimeInterval:(double)a0;
- (id)stringForObjectValue:(id)a0;

@end
