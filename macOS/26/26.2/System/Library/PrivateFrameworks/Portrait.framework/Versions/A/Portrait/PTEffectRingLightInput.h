@class NSString;

@interface PTEffectRingLightInput : NSObject

@property int screenNitsEstimationMode;
@property int ambientColorEstimationMode;
@property float ringLightUserColorTemperatureNormalized;
@property float currentScreenNits;
@property float currentRingLightWidth;
@property float userScreenBrightnessChangeFrom;
@property float userScreenBrightnessChangeTo;
@property (retain, nonatomic) NSString *ringLightMetadataFile;
@property BOOL enabled;
@property float ringLightEffectStrength;

- (void).cxx_destruct;
- (id)init;

@end
