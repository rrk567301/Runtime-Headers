@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (id)initWithRecord:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEntitledForSPIAccess;
- (void).cxx_destruct;
- (BOOL)isEntitledForAPIAccess;

@end
