@class _TtC13CoreIDVShared51XPCMobileDocumentProviderLocalOptionUIConfiguration, _TtC13CoreIDVShared43XPCMobileDocumentProviderPresentmentRequest, _TtC13CoreIDVShared38XPCMobileDocumentProviderAuxiliaryView, NSError, NSURL;

@interface CoreIDVUI.IdentityCredentialProviderViewConnection : _TtCs12_SwiftObject <CoreIDVShared.MobileDocumentProviderViewServiceDelegateInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ onDismissed;
    void /* unknown type, empty encoding */ onPresentAuthorizationViewFromSelectionView;
    void /* unknown type, empty encoding */ onPresentScannableCodeView;
    void /* unknown type, empty encoding */ onPresentConnectingToAuthenticatorView;
    void /* unknown type, empty encoding */ onPresentAuxiliaryView;
    void /* unknown type, empty encoding */ onPresentSelectionViewFromAuxiliaryView;
    void /* unknown type, empty encoding */ onPresentAuthorizationViewFromAuxiliaryView;
}

- (void)dismissWithCompletionHandler:(void (^)(void))a0;
- (void)presentAuthorizationViewFromAuxiliaryViewWithRequest:(_TtC13CoreIDVShared43XPCMobileDocumentProviderPresentmentRequest *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)presentAuthorizationViewFromSelectionViewWithRequest:(_TtC13CoreIDVShared43XPCMobileDocumentProviderPresentmentRequest *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)presentAuxiliaryView:(_TtC13CoreIDVShared38XPCMobileDocumentProviderAuxiliaryView *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)presentScannableCodeViewWithPayload:(NSURL *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)presentSelectionViewFromAuxiliaryViewWithConfiguration:(_TtC13CoreIDVShared51XPCMobileDocumentProviderLocalOptionUIConfiguration *)a0 completionHandler:(void (^)(NSError *))a1;

@end
