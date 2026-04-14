@class ASCLockupViewGroup;

@interface AKMediaServicesController : NSObject {
    ASCLockupViewGroup *_group;
}

- (id)init;
- (void).cxx_destruct;
- (void)appIconForBundleID:(id)a0 size:(id)a1 completion:(id /* block */)a2;
- (BOOL)isAccount:(id)a0 activeForMediaType:(unsigned long long)a1;

@end
