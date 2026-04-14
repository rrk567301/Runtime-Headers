@interface KHDBBase64MercuryCodec : KHDBBase64Codec

+ (const char *)decoder;
+ (const char *)alphabet;
+ (long long)encodedUuidLength;
+ (BOOL)appendPadding;
+ (BOOL)checkTerminators:(long long)a0 expected:(long long)a1;

@end
