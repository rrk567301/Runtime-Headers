@class NSString;

@interface UARPAssetVersionSoftwareUpdate : UARPAssetVersionBase

@property (readonly) NSString *restoreVersion;
@property (readonly) NSString *osVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) BOOL internalAsset;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)assetVersion;
- (id)initWithRestoreVersion:(id)a0 osVersion:(id)a1 buildVersion:(id)a2 internalAsset:(BOOL)a3;

@end
