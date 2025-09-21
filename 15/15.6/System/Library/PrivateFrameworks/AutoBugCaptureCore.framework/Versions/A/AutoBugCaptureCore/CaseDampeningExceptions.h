@interface CaseDampeningExceptions : NSObject

+ (void)setProductType:(id)a0;
+ (void)setWiFiChipset:(id)a0;
+ (char)allowDampeningExceptionFor:(id)a0;
+ (char)isException:(id)a0 containedInString:(id)a1;
+ (char)isString:(id)a0 inExceptionList:(id)a1;
+ (void)setBasebandChipset:(id)a0;
+ (void)setLoggingHandle:(id)a0;
+ (void)setNPIDevice:(char)a0;

@end
