@class NSString, PAImageType;

@interface PAImageAssetType : NSObject <NSCopying>

@property (readonly) NSString *key;
@property (readonly) PAImageType *imageType;
@property BOOL consumesAdjustmentChanges;

+ (id)assetTypeForImageType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithKey:(id)a0 imageType:(id)a1;
- (BOOL)isEqualToAssetType:(id)a0;

@end
