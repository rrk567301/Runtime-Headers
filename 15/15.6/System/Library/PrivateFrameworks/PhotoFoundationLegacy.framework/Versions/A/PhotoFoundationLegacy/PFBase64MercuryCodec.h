@interface PFBase64MercuryCodec : PFBase64Codec

+ (const char *)decoder;
+ (const char *)alphabet;
+ (char)appendPadding;
+ (char)checkTerminators:(long long)a0 expected:(long long)a1;
+ (unsigned long long)encodedUuidLength;

@end
