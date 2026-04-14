@class NSData;

@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    BOOL _installed;
    NSData *_vendorIdentifier;
}

- (id)initWithRecord:(id)a0;
- (id)vendorIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;

@end
