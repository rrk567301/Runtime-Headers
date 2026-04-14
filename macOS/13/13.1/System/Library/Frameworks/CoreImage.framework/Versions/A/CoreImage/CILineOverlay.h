@class CIImage, NSNumber;

@interface CILineOverlay : CIFilter {
    NSNumber *inputNRNoiseLevel;
    NSNumber *inputNRSharpness;
    NSNumber *inputEdgeIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputContrast;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CISobelEdges;
- (id)_CIComicNoiseReduction;
- (id)_CIColorControls;

@end
