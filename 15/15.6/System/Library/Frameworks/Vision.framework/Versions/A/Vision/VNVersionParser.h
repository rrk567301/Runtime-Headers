@interface VNVersionParser : NSObject

+ (char)_isSeparatedString:(id)a0 equalToString:(id)a1 atIndex:(unsigned long long)a2 usingSeparator:(id)a3;
+ (char)isMajorVersion:(id)a0 equalToMajorVersion:(id)a1;
+ (char)isMinorVersion:(id)a0 equalToMinorVersion:(id)a1;

@end
