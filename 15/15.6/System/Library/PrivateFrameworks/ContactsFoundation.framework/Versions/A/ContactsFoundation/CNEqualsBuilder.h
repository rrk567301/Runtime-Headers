@interface CNEqualsBuilder : NSObject

+ (char)evaluateBuilderBlock:(id /* block */)a0 remainingBlocks:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
+ (char)isBool:(char)a0 equalToOther:(char)a1;
+ (char)isDouble:(double)a0 equalToOther:(double)a1 withAccuracy:(double)a2;
+ (char)isInteger:(long long)a0 equalToOther:(long long)a1;
+ (char)isObject:(id)a0 equalToOther:(id)a1;
+ (char)isObject:(id)a0 equalToOther:(id)a1 withBlocks:(id /* block */)a2;
+ (char)isObject:(id)a0 kindOfClass:(Class)a1 andEqualToObject:(id)a2 withBlocks:(id /* block */)a3;
+ (char)isObject:(id)a0 memberOfClass:(Class)a1 andEqualToObject:(id)a2 withBlocks:(id /* block */)a3;
+ (char)isObject:(id)a0 memberOfSameClassAndEqualTo:(id)a1 withBlocks:(id /* block */)a2;
+ (char)isString:(id)a0 localizedCaseInsensitiveEqualToOther:(id)a1;

@end
