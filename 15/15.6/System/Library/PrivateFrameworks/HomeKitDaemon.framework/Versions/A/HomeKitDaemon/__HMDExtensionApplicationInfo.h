@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isInstalled;
- (id)initWithRecord:(id)a0;
- (id)vendorIdentifier;
- (id)attributeDescriptions;
- (id)hostApplicationInfo;

@end
