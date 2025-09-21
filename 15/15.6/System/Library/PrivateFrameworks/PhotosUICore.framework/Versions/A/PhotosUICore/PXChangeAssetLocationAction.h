@class PXAnnotatedLocation, CLLocation;

@interface PXChangeAssetLocationAction : PXAssetLocationAction {
    CLLocation *_preciseLocation;
    char _shifted;
}

@property (readonly, nonatomic) PXAnnotatedLocation *annotatedLocation;
@property (readonly, nonatomic) long long sourceType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsActionString;
- (id)analyticsPlaceLevelString;
- (id)initWithAssets:(id)a0 annotatedLocation:(id)a1 sourceType:(long long)a2;
- (id)locationForAsset:(id)a0 shifted:(char *)a1;

@end
