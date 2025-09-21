@class NSString;

@interface SRAssetBundleCacheEntry : NSObject

@property (readonly, nonatomic) long long assetType;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) long long deliveryType;
@property (readonly, nonatomic) char isResult;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)assetTypeString;
- (id)deliveryTypeString;
- (id)initWithAssetType:(long long)a0 language:(id)a1 deliveryType:(long long)a2;
- (char)isResultNone;
- (void)makeResultNone;
- (char)makeResultWithContentVersion:(unsigned long long)a0 path:(id)a1;

@end
