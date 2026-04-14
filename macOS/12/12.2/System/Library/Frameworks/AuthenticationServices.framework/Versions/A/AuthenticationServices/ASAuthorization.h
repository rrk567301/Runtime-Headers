@protocol ASAuthorizationProvider, ASAuthorizationCredential;

@interface ASAuthorization : NSObject

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;

+ (id)new;
+ (id)authorizationFromCredential:(id)a0;

- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 credential:(id)a1;

@end
