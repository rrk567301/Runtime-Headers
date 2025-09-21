@interface CSLogger : NSObject

+ (id)defaultCategory;
+ (void)initialize;
+ (id)signpostCategory;
+ (id)logForCategory:(id)a0;

@end
