@class NSData;

@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    BOOL _installed;
    NSData *_vendorIdentifier;
}

- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)vendorIdentifier;
- (BOOL)isInstalled;
- (void).cxx_destruct;

@end
