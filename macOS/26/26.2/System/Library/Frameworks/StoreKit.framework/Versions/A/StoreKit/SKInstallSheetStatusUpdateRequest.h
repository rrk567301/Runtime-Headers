@interface SKInstallSheetStatusUpdateRequest : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void).cxx_destruct;
- (void)start;
- (id)init;
- (id)initWithAppBundleId:(id)a0 isInstallSheetOpen:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
