@interface CaseDampeningExceptions : NSObject

+ (BOOL)allowDampeningExceptionFor:(id)a0;
+ (BOOL)isException:(id)a0 containedInString:(id)a1;
+ (BOOL)isString:(id)a0 inExceptionList:(id)a1;
+ (void)setLoggingHandle:(id)a0;
+ (void)setNPIDevice:(BOOL)a0;

@end
