@interface JPSignatureVerifier : NSObject

@property (nonatomic) struct JetPackSignatureVerifier { } *backing;
@property (readonly, nonatomic) char releaseBackingOnDealloc;

+ (id)defaultSignatureVerifier;
+ (id)signatureVerifierWithCertificate:(id)a0;
+ (id)unsafeIgnoreSignatureVerifier;

- (void)dealloc;
- (id)initWithBacking:(struct JetPackSignatureVerifier { } *)a0 releaseOnDealloc:(char)a1;

@end
