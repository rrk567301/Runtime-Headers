@class NSData;

@interface PTEffectRingLightOutput : NSObject

@property float screenNitsFloor;
@property float recommendedColorTemperatureNormalized;
@property float ringLightWidth;
@property (retain, nonatomic) NSData *ringLightAdaptiveSettings;

- (void).cxx_destruct;

@end
