@class ASAuthorizationRemoteViewController;

@interface ASCAuthorizationRemotePresenter : NSObject {
    ASAuthorizationRemoteViewController *_remoteViewController;
}

- (void).cxx_destruct;
- (void)presentWithWindow:(id)a0 daemonEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentWithUIWindow:(id)a0 daemonEndpoint:(id)a1 completionHandler:(id /* block */)a2;

@end
