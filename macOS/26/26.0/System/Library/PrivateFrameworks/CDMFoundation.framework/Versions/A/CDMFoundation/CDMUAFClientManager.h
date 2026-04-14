@class NSString, NSDictionary, UAFAssetSet;

@interface CDMUAFClientManager : NSObject

@property (readonly, nonatomic) UAFAssetSet *assetSet;
@property (readonly, nonatomic) NSString *assetSetName;
@property (readonly, nonatomic) NSDictionary *usages;

- (void)setLocale:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getLocale;
- (void)initUAFAssetSet;
- (id)getAssetSet;
- (id)getFactors;
- (id)initWithAssetSet:(id)a0 usages:(id)a1;
- (void)setAssetSet:(id)a0;
- (BOOL)shouldInitUAFAssetSetInSetupForLocale:(id)a0;

@end
