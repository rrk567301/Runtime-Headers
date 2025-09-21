@class NSString;

@interface RVSLogger : NSObject {
    NSString *_name;
}

+ (id)defaultLogger;
+ (id)loggerWithName:(id)a0;

- (void).cxx_destruct;
- (id)_initWithName:(id)a0;
- (void)_logMessage:(id)a0 values:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (void)debug:(id)a0;

@end
