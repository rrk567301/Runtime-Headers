@class CIFilter;

@interface DGiPhotoAntiqueEffect : NSObject {
    CIFilter *_saturationFilter;
    CIFilter *_temperatureFilter;
    CIFilter *_blackAndWhitePointFilter;
    float _level;
    float _saturation;
    float _temperature;
    float _whitePoint;
}

- (id)init;
- (void).cxx_destruct;
- (void)setLevel:(float)a0;
- (void)resetValues;
- (void)setSaturation:(float)a0 andTemperature:(float)a1 andWhitePoint:(float)a2;
- (id)processImage:(id)a0 scale:(float)a1;

@end
