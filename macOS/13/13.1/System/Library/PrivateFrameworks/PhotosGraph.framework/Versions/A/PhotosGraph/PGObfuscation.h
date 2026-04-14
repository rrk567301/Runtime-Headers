@interface PGObfuscation : NSObject

+ (id)obfuscatedStringFromPlaintextString:(id)a0;
+ (id)plaintextStringFromObfuscatedString:(id)a0;
+ (id)obfuscatedStringFromPlaintextNumber:(id)a0;
+ (id)plaintextNumberFromObfuscatedString:(id)a0;
+ (id)obfuscatedStringFromPlaintextDate:(id)a0 usingDateFormatter:(id)a1;
+ (id)plaintextDateFromObfuscatedString:(id)a0 usingDateFormatter:(id)a1;

@end
