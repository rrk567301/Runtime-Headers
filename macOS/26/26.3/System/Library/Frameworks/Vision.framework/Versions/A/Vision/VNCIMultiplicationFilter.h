@class NSNumber;

@interface VNCIMultiplicationFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputFactor1;
@property (copy, nonatomic) NSNumber *inputFactor2;
@property (copy, nonatomic) NSNumber *inputFactor3;
@property (copy, nonatomic) NSNumber *inputFactor4;

- (id)init;
- (id)outputImage;
- (void).cxx_destruct;

@end
