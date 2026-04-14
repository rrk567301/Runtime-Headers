@class CIImage, CIContext;

@interface HMIAverageImage : HMFObject <HMIAggregateImage>

@property (retain) CIImage *currentAverage;
@property long long numImages;
@property float decay;
@property (readonly) CIContext *context;
@property (readonly) unsigned long long imageCount;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)outputImage;
- (void)addImage:(id)a0;
- (id)initWithDecay:(float)a0;

@end
