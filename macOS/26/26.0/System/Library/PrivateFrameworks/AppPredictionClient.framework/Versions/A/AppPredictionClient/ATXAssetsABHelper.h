@class NSString, NSDictionary;

@interface ATXAssetsABHelper : NSObject

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDictionary *abGroupContents;

+ (unsigned long long)saltedIndex:(unsigned long long)a0;
+ (BOOL)isDefaultGroupIdentifier:(id)a0;
+ (unsigned char)indexForDevice;
+ (void)initialize;
+ (void)setStaticIndexForDevice:(unsigned char)a0;
+ (void)setIndexProviderForDevice:(id /* block */)a0;
+ (void)setDefaultDeviceIndexPolicy;
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)a0;
+ (id)decDeviceId;

- (id)init;
- (id)initWithAssetContents:(id)a0 specifiedABGroup:(id)a1 indexForDevice:(unsigned char)a2;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1;
- (id)initWithAssetContents:(id)a0;
- (id)initWithAssetContents:(id)a0 indexForDevice:(unsigned char)a1;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
- (void).cxx_destruct;

@end
