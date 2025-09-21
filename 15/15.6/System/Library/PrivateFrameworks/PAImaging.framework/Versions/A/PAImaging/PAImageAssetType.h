@class NSString, PAImageType;

@interface PAImageAssetType : NSObject <NSCopying>

@property (readonly) NSString *key;
@property (readonly) PAImageType *imageType;
@property char consumesAdjustmentChanges;

+ (id)assetTypeForImageType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 imageType:(id)a1;
- (char)isEqualToAssetType:(id)a0;

@end
