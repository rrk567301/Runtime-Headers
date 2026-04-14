@class NSUUID, NUColorSampler, PAImageItemController, PHAsset;

@interface PAWhiteBalanceController : NSObject {
    PAImageItemController *_imageItemController;
}

@property (readonly) NUColorSampler *sampler;
@property (readonly) NSUUID *operationUUID;
@property (readonly) PHAsset *asset;
@property int whiteBalanceType;

- (void).cxx_destruct;
- (void)reset;
- (id)_descriptionEditController;
- (void)_setTemperature:(double)a0 tint:(double)a1;
- (void)processRAWTempTintColor:(id)a0;
- (void)_setTemperatureAndTintFromRGBA:(double *)a0;
- (id)initWithAsset:(id)a0 operationUUID:(id)a1;
- (void)setAuto;
- (void)processPickedColor:(id)a0;

@end
