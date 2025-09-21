@interface KHDBBase64MercuryCodec : KHDBBase64Codec

+ (const char *)decoder;
+ (const char *)alphabet;
+ (char)appendPadding;
+ (char)checkTerminators:(long long)a0 expected:(long long)a1;
+ (long long)encodedUuidLength;

@end
