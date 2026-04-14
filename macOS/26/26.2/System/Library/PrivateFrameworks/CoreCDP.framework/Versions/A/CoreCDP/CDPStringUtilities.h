@interface CDPStringUtilities : NSObject

+ (BOOL)isValidKeyLength:(id)a0 expectedLength:(unsigned long long)a1 withSeparator:(id)a2;
+ (id)keyWithGrouping:(id)a0 groupLength:(unsigned long long)a1 separator:(id)a2;
+ (id)sanitizedKeyInput:(id)a0;

@end
