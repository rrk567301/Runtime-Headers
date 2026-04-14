@class NSError, _TtC13CoreIDVShared43XPCMobileDocumentProviderPresentmentRequest, _TtC13CoreIDVShared44XPCMobileDocumentProviderPresentmentResponse;

@interface IdentityDocumentServicesUI.ISO18013MobileDocumentRequestSceneViewModel : NSObject <CoreIDVShared.IdentityDocumentProviderExtensionUIInterface> {
    void /* unknown type, empty encoding */ _context;
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestDocumentWithRequest:(_TtC13CoreIDVShared43XPCMobileDocumentProviderPresentmentRequest *)a0 completionHandler:(void (^)(_TtC13CoreIDVShared44XPCMobileDocumentProviderPresentmentResponse *, NSError *))a1;

@end
