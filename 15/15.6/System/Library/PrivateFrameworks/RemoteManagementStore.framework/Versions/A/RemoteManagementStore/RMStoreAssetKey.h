@class NSString;

@interface RMStoreAssetKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, copy, nonatomic) NSString *assetServerToken;

+ (id)newAssetKey:(id)a0;
+ (id)newAssetKeyWithAsset:(id)a0;
+ (id)newAssetKeyWithAssetIdentifier:(id)a0 assetServerToken:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (id)initWithAssetIdentifier:(id)a0 assetServerToken:(id)a1;
- (id)initWithAssetKey:(id)a0;

@end
