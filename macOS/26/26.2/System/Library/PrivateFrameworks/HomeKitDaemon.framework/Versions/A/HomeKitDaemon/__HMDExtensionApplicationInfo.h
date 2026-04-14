@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)vendorIdentifier;
- (id)attributeDescriptions;
- (BOOL)isInstalled;
- (void).cxx_destruct;
- (id)hostApplicationInfo;

@end
