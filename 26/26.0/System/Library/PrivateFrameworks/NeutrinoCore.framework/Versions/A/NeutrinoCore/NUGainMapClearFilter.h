@class CIImage, NSNumber;

@interface NUGainMapClearFilter : CIFilter

@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) CIImage *inputMatte;
@property (retain, nonatomic) NSNumber *inputInvertMatte;

- (id)outputImage;
- (void).cxx_destruct;

@end
