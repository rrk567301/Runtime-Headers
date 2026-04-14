@interface PaperKitHostContext : NSExtensionContext <PaperKitHostProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (void)hostOpenLink:(id)a0;
- (void)hostReportingPaperBounds:(id)a0;
- (void)hostDecryptData:(id)a0;
- (void)hostReceiveMulticastData:(id)a0;
- (void)hostReceiveLiveStreamData:(id)a0;

@end
