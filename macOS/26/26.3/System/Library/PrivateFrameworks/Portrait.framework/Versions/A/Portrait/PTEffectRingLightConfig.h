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

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void /* unknown type, empty encoding */)diagonalScreenSizeInches;
- (void)setDiagonalScreenSizeInches:(SEL)a0;

@end
