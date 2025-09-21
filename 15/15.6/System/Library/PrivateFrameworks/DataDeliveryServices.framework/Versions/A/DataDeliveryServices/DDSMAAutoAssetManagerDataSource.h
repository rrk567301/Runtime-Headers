@class NSString;

@interface DDSMAAutoAssetManagerDataSource : NSObject <DDSMAAutoAssetManagerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)linguisticAssetCompatabilityVersion;
- (char)shouldDownloadAutoAsset;
- (id)supportedAutoAssetSpecifiers;

@end
