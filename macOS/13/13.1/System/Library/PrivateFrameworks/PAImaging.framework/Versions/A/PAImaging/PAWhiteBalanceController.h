@class NSUUID, NUColorSampler, PHAsset, PAItemController;

@interface PAWhiteBalanceController : NSObject {
    PAItemController *_imageItemController;
}

@property (readonly) NUColorSampler *sampler;
@property (readonly) NSUUID *operationUUID;
@property (readonly) PHAsset *asset;
@property int whiteBalanceType;

- (void).cxx_destruct;
- (void)reset;
- (id)_descriptionEditController;
- (id)initWithAsset:(id)a0 operationUUID:(id)a1;
- (void)setAuto;
- (void)_setTemperatureAndTintFromRGBA:(double *)a0;
- (void)_setTemperature:(double)a0 tint:(double)a1;
- (void)processPickedColor:(id)a0;
- (void)processRAWTempTintColor:(id)a0;

@end
