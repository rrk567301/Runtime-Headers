@class NSData;

@interface PTEffectRingLightConfig : NSObject

@property float EMAFactorPerFrame;
@property float deadZoneFactorPerFrame;
@property float effectEnableAtLux;
@property float effectDisableAtLux;
@property float effectMinAtLux;
@property float effectMaxAtLux;
@property float minNitsMinEffectStrength;
@property float minNitsMaxEffectStrength;
@property float maxNitsMinEffectStrength;
@property float maxNitsMaxEffectStrength;
@property float deviceMaxScreenNits;
@property void /* unknown type, empty encoding */ deviceScreenSizeInches;
@property (retain, nonatomic) NSData *ringLightAdaptiveSettings;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void /* unknown type, empty encoding */)diagonalScreenSizeInches;
- (void)setDiagonalScreenSizeInches:(SEL)a0;

@end
