@class NSError, NSString, VSIdentityProvider;

@interface VSViewModel : NSObject

@property (nonatomic) unsigned long long viewState;
@property (nonatomic, getter=shouldPreValidate) char preValidate;
@property (nonatomic, getter=isInAuthenticationShareFlow) char authenticationShare;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;

@end
