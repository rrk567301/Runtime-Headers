@class CCProvisionalResourceManager;

@interface CCActivationAssertion : NSObject

@property (readonly, nonatomic) long long activationResult;
@property (readonly, nonatomic) CCProvisionalResourceManager *resourceManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)runOperation:(id /* block */)a0;
- (id)initWithActivationResult:(long long)a0 resourceManager:(id)a1;

@end
