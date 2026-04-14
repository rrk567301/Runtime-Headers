@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCubeData;

+ (id)customAttributes;

- (void)dealloc;
- (id)outputImage;
- (id)_kernel;
- (BOOL)_checkInputs;
- (id)cubeImage;
- (id)_kernelOpaque;

@end
