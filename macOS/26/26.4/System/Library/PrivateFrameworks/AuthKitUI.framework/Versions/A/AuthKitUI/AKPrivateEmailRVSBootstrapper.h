@class NSRemoteViewController, NSViewController;

@interface AKPrivateEmailRVSBootstrapper : NSObject

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly) NSViewController *viewController;

+ (void)requestPrivateEmailViewControllerWithCompletion:(id /* block */)a0;

- (id)serviceProxy;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupWithRequestContext:(id)a0 completion:(id /* block */)a1;

@end
