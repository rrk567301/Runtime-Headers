@interface SKInstallSheetStatusUpdateRequest : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAppBundleId:(id)a0 isInstallSheetOpen:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
