@protocol LACADMUserProviding;

@interface LACAuthenticatorHelper : NSObject

@property (class, nonatomic, readonly) LACAuthenticatorHelper *sharedInstance;

@property (nonatomic, readonly) id<LACADMUserProviding> userProvider;

- (id)init;
- (id)initWithUserProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAdministratorRequiredForUserID:(id)a0 authenticator:(long long)a1;
- (BOOL)isRequirementMetForUserID:(id)a0 authenticator:(long long)a1;

@end
