@class NSString;

@interface UARPAssetManagerCacheConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *appleModelNumber;
@property (readonly, copy) NSString *hwFusing;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *assetVersion;
@property (readonly, copy) NSString *filePath;
@property (readonly) BOOL usePallas;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppleModelNumber:(id)a0 hwFusing:(id)a1 domain:(id)a2 assetVersion:(id)a3 filePath:(id)a4 usePallas:(BOOL)a5;

@end
