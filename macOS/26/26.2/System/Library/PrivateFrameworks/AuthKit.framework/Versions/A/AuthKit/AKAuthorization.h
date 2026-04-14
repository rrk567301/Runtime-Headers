@protocol AKCredentialRequestProtocol, AKCredential;

@interface AKAuthorization : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> authorizedRequest;
@property (retain, nonatomic) id<AKCredential> credential;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
