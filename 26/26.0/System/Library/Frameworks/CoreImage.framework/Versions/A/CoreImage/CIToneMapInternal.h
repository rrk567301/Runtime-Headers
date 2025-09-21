@class CIImage, NSNumber, NSString;

@interface CIToneMapInternal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSourceHeadroom;
@property (retain, nonatomic) NSNumber *inputTargetHeadroom;
@property (retain, nonatomic) NSString *inputPreferredDynamicRange;
@property (retain, nonatomic) NSNumber *inputMinimumSDRExposure;
@property (retain, nonatomic) NSNumber *inputOffsetAnchor;
@property (retain, nonatomic) NSNumber *inputHighlightsTradeOffRatio;
@property (retain, nonatomic) NSNumber *inputMinimumGammaAdjustment;
@property (retain, nonatomic) NSNumber *inputStopAnchor;

+ (id)customAttributes;

- (id)outputImage;
- (float)targetHeadroom;
- (id)outputValue:(id)a0;
- (float)srcHeadroom;

@end
