@class CIFilter;

@interface DGiPhotoEdgeBlurEffect : NSObject {
    CIFilter *_filter;
    float _level;
    float _intensity;
}

- (void)setLevel:(float)a0;
- (void).cxx_destruct;
- (id)filter;
- (id)init;
- (void)resetValues;
- (void)setIntensity:(float)a0;
- (id)createBlurImageFromImage:(id)a0 scale:(float)a1;
- (id)processImage:(id)a0 scale:(float)a1;
- (void)setWidth:(float)a0 andHeight:(float)a1;

@end
