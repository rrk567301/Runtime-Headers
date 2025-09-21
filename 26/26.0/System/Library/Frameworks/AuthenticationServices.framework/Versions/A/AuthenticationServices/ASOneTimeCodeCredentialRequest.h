@class NSString, ASOneTimeCodeCredentialIdentity;
@protocol ASCredentialIdentity;

@interface ASOneTimeCodeCredentialRequest : NSObject <ASCredentialRequest> {
    ASOneTimeCodeCredentialIdentity *_credentialIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<ASCredentialIdentity> credentialIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithCredentialIdentity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredentialIdentity:(id)a0;

@end
