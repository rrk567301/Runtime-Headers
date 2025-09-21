@class _TtC26AuthenticationServicesCore38ASCPublicKeyAccountRegistrationOptions, NSString, ASCPublicKeyCredentialCreationOptions, _TtC26AuthenticationServicesCore38ASCPasskeyAccountRegistrationUserState;

@interface AuthenticationServicesCore.ASCPasskeyAccountRegistrationLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly) _TtC26AuthenticationServicesCore38ASCPublicKeyAccountRegistrationOptions *options;
@property (nonatomic, readonly) _TtC26AuthenticationServicesCore38ASCPasskeyAccountRegistrationUserState *userState;
@property (nonatomic, readonly) ASCPublicKeyCredentialCreationOptions *publicKeyCredentialCreationOptions;
@property (nonatomic, readonly) BOOL userHasSignInWithAppleAccountForService;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)contactIdentifierValueWithCompletionHandler:(void (^)(NSString *))a0;
- (id)initWithOptions:(id)a0 clientApplicationBundleID:(id)a1 userHasSignInWithAppleAccountForService:(BOOL)a2;

@end
