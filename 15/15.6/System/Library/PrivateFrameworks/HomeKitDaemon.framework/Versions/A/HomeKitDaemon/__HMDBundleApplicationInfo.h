@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithRecord:(id)a0;
- (char)isEntitledForAPIAccess;
- (char)isEntitledForSPIAccess;

@end
