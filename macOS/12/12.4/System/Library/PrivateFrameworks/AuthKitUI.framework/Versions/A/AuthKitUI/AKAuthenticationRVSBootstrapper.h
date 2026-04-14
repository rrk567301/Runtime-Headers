@class NSRemoteViewController, NSViewController;

@interface AKAuthenticationRVSBootstrapper : NSObject

@property (retain) NSRemoteViewController *remoteViewController;
@property (readonly) NSViewController *viewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (id)_serviceProxy;
- (id)initWithRemoteViewController:(id)a0;
- (void)bootstrapRemoteViewServiceWithSurrogateID:(id)a0 withAuthenticationContext:(id)a1 attachToWindow:(BOOL)a2 completion:(id /* block */)a3;
- (void)startRemoteViewServiceAuthentication;

@end
