@interface SLSSigningKey : NSObject <ECAuthenticationKey, NSSecureCoding> {
    struct unique_ptr<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key, std::default_delete<(anonymous namespace)::HMAC<(anonymous namespace)::HashingAlgorithm::SHA256, 32>::Key>> { struct Key *__ptr_; } _key;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)key;
+ (id)keyWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createSignatureForMessage:(id)a0;
- (id)signingContext;

@end
