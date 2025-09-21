@class NSData;

@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    char _installed;
    NSData *_vendorIdentifier;
}

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isInstalled;
- (id)initWithRecord:(id)a0;
- (id)vendorIdentifier;

@end
