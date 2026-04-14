@class NSError, _TtC13CoreIDVShared24XPCWebPresentmentRequest;

@interface CoreIDVUI.MobileDocumentProviderExtensionHostViewCoordinator : NSObject <EXHostViewControllerDelegate, CoreIDVShared.IdentityDocumentProviderExtensionUIDelegateInterface> {
    void /* unknown type, empty encoding */ presentmentContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)releaseRequestWithCompletionHandler:(void (^)(_TtC13CoreIDVShared24XPCWebPresentmentRequest *, NSError *))a0;

@end
