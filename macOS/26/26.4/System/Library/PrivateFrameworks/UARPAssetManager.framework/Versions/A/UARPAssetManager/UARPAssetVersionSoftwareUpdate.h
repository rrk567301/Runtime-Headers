@class NSString;

@interface UARPAssetVersionSoftwareUpdate : UARPAssetVersionBase

@property (readonly) NSString *restoreVersion;
@property (readonly) NSString *osVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) BOOL internalAsset;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)assetVersion;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRestoreVersion:(id)a0 osVersion:(id)a1 buildVersion:(id)a2 internalAsset:(BOOL)a3;

@end
