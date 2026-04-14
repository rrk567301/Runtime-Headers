@class NSRemoteViewController, NSViewController;

@interface AKFidoRVSBootstrapper : NSObject

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly) NSViewController *viewController;

- (void)disconnect;
- (void).cxx_destruct;
- (id)serviceProxy;
- (void)dealloc;
- (id)initWithRemoteViewController:(id)a0;
- (void)registerFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;

@end
