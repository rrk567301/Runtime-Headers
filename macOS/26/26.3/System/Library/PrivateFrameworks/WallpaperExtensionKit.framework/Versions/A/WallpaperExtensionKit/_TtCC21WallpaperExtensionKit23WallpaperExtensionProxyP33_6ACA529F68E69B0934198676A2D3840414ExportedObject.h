@interface _TtCC21WallpaperExtensionKit23WallpaperExtensionProxyP33_6ACA529F68E69B0934198676A2D3840414ExportedObject : NSObject <WallpaperExtensionKit.WallpaperExtensionProxyXPCProtocol> {
    void /* unknown type, empty encoding */ extensionProxy;
    void /* unknown type, empty encoding */ extensionProcess;
    void /* unknown type, empty encoding */ extensionConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateSettingsViewModels:(id)a0 reply:(id /* block */)a1;
- (void)invalidateSnapshotsWithReply:(id /* block */)a0;
- (void)pingWithId:(id)a0;
- (void)requestReadOnlyAccessTo:(id)a0 reply:(id /* block */)a1;

@end
