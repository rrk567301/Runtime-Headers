@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (BOOL)isEntitledForAPIAccess;
- (id)initWithRecord:(id)a0;
- (BOOL)isEntitledForSPIAccess;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
