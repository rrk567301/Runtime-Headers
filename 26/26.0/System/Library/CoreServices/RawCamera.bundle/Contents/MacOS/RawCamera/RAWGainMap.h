@class CIVector, NSData, CIImage, NSNumber;

@interface RAWGainMap : RAWFilter {
    CIImage *inputImage;
    NSData *inputGainMapData;
    CIVector *inputGainMapApplyRegion;
    CIVector *inputGainMapRegion;
    CIVector *inputGainMapSize;
    NSNumber *inputGainMapRowPitch;
    NSNumber *inputGainMapColPitch;
    NSNumber *inputGainMapNumPlanes;
    NSNumber *inputGainMapExecute;
    id inputColorSpace;
    CIImage *_gainMapImg;
}

- (id)outputImage;
- (void)setDefaults;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)makeMapSampler;

@end
