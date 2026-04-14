@class CIFilter;

@interface DGiPhotoFadeEffect : NSObject {
    CIFilter *_saturationFilter;
    CIFilter *_temperatureFilter;
    CIFilter *_exposureFilter;
    float _level;
    float _saturation;
    float _temperature;
    float _exposure;
}

- (void)setLevel:(float)a0;
- (void)resetValues;
- (id)init;
- (void).cxx_destruct;
- (id)processImage:(id)a0 scale:(float)a1;
- (void)setSaturation:(float)a0 andTemperature:(float)a1 andExposure:(float)a2;

@end
