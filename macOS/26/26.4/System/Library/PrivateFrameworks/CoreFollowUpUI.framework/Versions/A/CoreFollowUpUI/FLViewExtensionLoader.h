@class NSViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader {
    NSViewController *_extensionViewController;
}

- (id)remoteViewController;
- (void).cxx_destruct;
- (BOOL)_setupSessionIfNeeded:(id *)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 remoteController:(id)a1 completion:(id /* block */)a2;
- (void)_setupRemoteViewControllerWithExtension:(id)a0 completion:(id /* block */)a1;
- (void)_setupSessionWithExtension:(id)a0 completion:(id /* block */)a1;

@end
