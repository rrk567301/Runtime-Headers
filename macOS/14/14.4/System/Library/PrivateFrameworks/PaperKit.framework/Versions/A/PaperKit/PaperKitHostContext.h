@interface PaperKitHostContext : NSExtensionContext <PaperKitHostProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)hostDecryptData:(id)a0 reply:(id /* block */)a1;
- (void)hostExtensionIsSetup;
- (void)hostOpenLink:(id)a0;
- (void)hostPaperDidFailToLoad:(id)a0;
- (void)hostPaperDidSave;
- (void)hostReceiveLiveStreamData:(id)a0;
- (void)hostReceiveMulticastData:(id)a0;
- (void)hostReportingPaperBounds:(id)a0;

@end
