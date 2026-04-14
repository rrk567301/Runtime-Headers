@class NSString, NSDictionary;

@interface ATXAssetsABHelper : NSObject

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDictionary *abGroupContents;

+ (unsigned long long)cachedSaltedIndex:(unsigned long long)a0;
+ (void)initialize;
+ (void)setDefaultDeviceIndexPolicy;
+ (unsigned char)indexForDevice;
+ (BOOL)isDefaultGroupIdentifier:(id)a0;
+ (void)setIndexProviderForDevice:(id /* block */)a0;
+ (unsigned long long)saltedIndex:(unsigned long long)a0;
+ (void)setStaticIndexForDevice:(unsigned char)a0;
+ (id)decDeviceId;

- (id)initWithAssetContents:(id)a0 indexForDevice:(unsigned char)a1;
- (id)init;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
- (id)initWithAssetContents:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1;
- (id)initWithAssetContents:(id)a0 specifiedABGroup:(id)a1 indexForDevice:(unsigned char)a2;

@end
