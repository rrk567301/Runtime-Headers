@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (id)initWithRecord:(id)a0;
- (BOOL)isInstalled;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)vendorIdentifier;
- (void).cxx_destruct;
- (id)hostApplicationInfo;

@end
