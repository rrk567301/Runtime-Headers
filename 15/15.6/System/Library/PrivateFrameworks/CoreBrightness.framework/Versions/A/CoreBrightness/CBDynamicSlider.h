@interface CBDynamicSlider : NSObject {
    char _autoBrightness;
    char _battery;
    float _lux;
}

@property (readonly, nonatomic) struct { struct { float lux; float factor; } minPoint; struct { float lux; float factor; } maxPoint; struct { float lux; float factor; } hysteresisPoint; } range;
@property (readonly, nonatomic) struct { struct { float lux; float factor; } minPoint; struct { float lux; float factor; } maxPoint; struct { float lux; float factor; } hysteresisPoint; } rangeBattery;
@property (readonly, nonatomic) struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; } *currentRange;
@property (readonly, nonatomic) float targetScaler;
@property (nonatomic) float scaler;

+ (float)animatedDynamicSliderForOrigin:(float)a0 target:(float)a1 andProgress:(float)a2;

- (char)setOnBattery:(char)a0;
- (id)copyStatusInfo;
- (float)getRampTimeCurrent;
- (float)getRampTimeFrom:(float)a0 to:(float)a1;
- (id)initWithDeviceType:(unsigned long long)a0;
- (char)setAutoBrightnessEnabled:(char)a0;
- (char)setCurrentAmbient:(float)a0;
- (char)shouldRampTo:(float *)a0 over:(float *)a1;
- (char)updateDynamicSliderForce:(char)a0;

@end
