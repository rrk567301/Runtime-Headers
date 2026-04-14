@class NSString;
@protocol DDSUAFAssetProvider, DDSUAFManagerDataSource;

@interface DDSUAFManager : NSObject <DDSUAFManager>

@property (retain, nonatomic) id<DDSUAFAssetProvider> assetProvider;
@property (readonly, nonatomic) id<DDSUAFManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subscriberNameForClientID:(id)a0;
+ (id)subscriptionNameForAssertionID:(id)a0 withIndex:(unsigned long long)a1;
+ (id)subscriptionNamePrefixForAssertionID:(id)a0;

- (id)assertionIDsForClientID:(id)a0;
- (void).cxx_destruct;
- (id)_createAssetSetUsagesFromQuery:(id)a0;
- (void)addAssertionForAssetsWithQuery:(id)a0 assertionID:(id)a1 clientID:(id)a2;
- (id)initWithAssetProvider:(id)a0 dataSource:(id)a1;
- (void)removeAssertionWithIdentifier:(id)a0 clientID:(id)a1;

@end
