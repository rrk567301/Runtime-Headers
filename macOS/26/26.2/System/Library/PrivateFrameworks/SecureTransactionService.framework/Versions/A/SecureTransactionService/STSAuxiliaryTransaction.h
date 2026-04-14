@class NSError, STSAuxiliaryCredential;

@interface STSAuxiliaryTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) STSAuxiliaryCredential *credential;
@property (readonly, nonatomic) NSError *error;

- (BOOL)didSucceed;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 error:(id)a1;

@end
