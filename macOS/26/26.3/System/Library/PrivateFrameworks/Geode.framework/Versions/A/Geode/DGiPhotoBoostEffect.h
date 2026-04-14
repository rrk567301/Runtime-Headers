@class CIFilter;

@interface DGiPhotoBoostEffect : NSObject {
    CIFilter *_saturationFilter;
    CIFilter *_temperatureFilter;
    CIFilter *_blackAndWhitePointFilter;
    float _level;
    float _saturation;
    float _temperature;
    float _blackPoint;
}

- (void)setLevel:(float)a0;
- (id)init;
- (void)resetValues;
- (void).cxx_destruct;
- (id)processImage:(id)a0 scale:(float)a1;
- (void)setSaturation:(float)a0 andTemperature:(float)a1 andBlackPoint:(float)a2;

@end
