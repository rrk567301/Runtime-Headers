@class CIImage, NSNumber, NSString;

@interface CISystemToneMap : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputDisplayHeadroom;
@property (retain, nonatomic) NSString *inputPreferredDynamicRange;

+ (id)customAttributes;

- (id)outputImage;

@end
