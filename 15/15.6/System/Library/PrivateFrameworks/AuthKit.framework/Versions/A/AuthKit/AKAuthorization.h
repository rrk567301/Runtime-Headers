@protocol AKCredentialRequestProtocol, AKCredential;

@interface AKAuthorization : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> authorizedRequest;
@property (retain, nonatomic) id<AKCredential> credential;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
