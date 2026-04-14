@class NSRemoteViewController, NSViewController;

@interface AKAuthenticationRVSBootstrapper : NSObject

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly, nonatomic) NSViewController *viewController;

- (void)disconnect;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (void)dealloc;
- (void)bootstrapRemoteViewServiceWithSurrogateID:(id)a0 withAuthenticationContext:(id)a1 attachToWindow:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithRemoteViewController:(id)a0;
- (void)startRemoteViewServiceAuthentication;

@end
