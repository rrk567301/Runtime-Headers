@class NSString, NSArray;

@interface CBSliderMappingLUT : NSObject <CBSliderMapping> {
    NSArray *_LUT;
    float _pivot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyStatusInfo;
- (float)sliderForNits:(float)a0;
- (float)nitsForSlider:(float)a0;
- (id)newCurveWith140nitsMidFromCurve:(id)a0;
- (id)initWithRawLUT:(id)a0 pivot:(float)a1;
- (id)initWithLUT:(id)a0 pivot:(float)a1;
- (float)getMaxSliderNits;

@end
