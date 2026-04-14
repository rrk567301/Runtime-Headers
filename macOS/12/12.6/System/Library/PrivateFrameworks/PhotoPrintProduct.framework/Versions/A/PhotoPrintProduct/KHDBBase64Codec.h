@interface KHDBBase64Codec : NSObject

+ (const char *)decoder;
+ (const char *)alphabet;
+ (BOOL)appendPadding;
+ (BOOL)checkTerminators:(long long)a0 expected:(long long)a1;
+ (id)encodeBytes:(const void *)a0 withLength:(unsigned long long)a1;
+ (BOOL)decodeString:(id)a0 with:(id /* block */)a1;
+ (long long)encodedUuidLength;
+ (id)encodeData:(id)a0;
+ (id)encodeUuid:(id)a0;
+ (id)decodeString:(id)a0;
+ (id)decodeUuid:(id)a0;

- (id)init;

@end
