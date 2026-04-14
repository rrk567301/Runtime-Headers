@interface UAFCoreAnalyticsInstrumenter : NSObject

+ (void)logUAFAssetSetState:(id)a0 assetSpecifiersAndVersions:(id)a1;
+ (void)sendCAEvent:(id)a0 assetSpecifier:(id)a1 assetVersion:(id)a2;

@end
