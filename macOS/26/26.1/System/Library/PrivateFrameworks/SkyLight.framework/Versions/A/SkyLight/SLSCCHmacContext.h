@class NSData;

@interface SLSCCHmacContext : NSObject <ECAuthenticationMessageSigningContext> {
    struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct Digester *__ptr_; } _digester;
}

@property (readonly, nonatomic) NSData *finalizedData;

+ (id)contextWithImplementingDigester:(struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Digester>> { struct Digester *x0; })a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateSigningContextWithObject:(id)a0;
- (void)updateSigningContextWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)updateSigningContextWithData:(id)a0;

@end
