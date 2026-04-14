@class NSString, PAImageType;

@interface PAImageAssetType : NSObject <NSCopying>

@property (readonly) NSString *key;
@property (readonly) PAImageType *imageType;
@property BOOL consumesAdjustmentChanges;

+ (id)assetTypeForImageType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithKey:(id)a0 imageType:(id)a1;
- (BOOL)isEqualToAssetType:(id)a0;

@end
