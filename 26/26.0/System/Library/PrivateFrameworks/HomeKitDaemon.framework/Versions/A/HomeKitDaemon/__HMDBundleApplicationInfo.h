@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEntitledForSPIAccess;
- (id)initWithRecord:(id)a0;
- (BOOL)isEntitledForAPIAccess;
- (void).cxx_destruct;

@end
