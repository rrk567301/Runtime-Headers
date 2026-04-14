@interface PallasResponseVerifier : NSObject

@property (readonly) struct __SecKey { } *leafPublicKey;
@property (readonly) double issuanceDate;
@property (readonly) struct __CFString { } *keyAlg;

+ (id)CopyDataFromEncodedBase64:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)base64DecodeString:(const char *)a0 toBuffer:(char *)a1 length:(unsigned long long *)a2;
+ (long long)verifyReceipt:(id)a0 withSignature:(id)a1;

- (id)init;
- (BOOL)verifyResponse:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)determineAlg:(id)a0;
- (BOOL)verifyCerts:(id)a0 error:(id *)a1;

@end
