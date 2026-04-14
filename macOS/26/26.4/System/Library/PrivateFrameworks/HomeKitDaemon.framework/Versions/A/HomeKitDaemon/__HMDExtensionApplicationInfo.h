@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (id)initWithRecord:(id)a0;
- (id)vendorIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)hostApplicationInfo;

@end
