@class CIImage, NSMutableArray, CIContext;

@interface HMIApproximateMedianImage : HMFObject <HMIAggregateImage>

@property (retain) NSMutableArray *images;
@property (retain) CIImage *medianImage;
@property (readonly) CIContext *context;
@property (readonly) unsigned long long imageCount;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)outputImage;
- (void)addImage:(id)a0;
- (id)approximateMedianWithImages:(id)a0;
- (id)computedMedianImage;

@end
