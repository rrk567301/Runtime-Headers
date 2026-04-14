@class LACRecoveryCredential, LACRecoveryData;

@interface LACRecoveryKey : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACRecoveryCredential *credential;
@property (nonatomic, readonly) LACRecoveryData *externalData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCredential:(id)a0 externalData:(id)a1;

@end
