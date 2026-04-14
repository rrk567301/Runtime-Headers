@class NSError, STSAuxiliaryCredential;

@interface STSAuxiliaryTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) STSAuxiliaryCredential *credential;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (BOOL)didSucceed;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCredential:(id)a0 error:(id)a1;

@end
