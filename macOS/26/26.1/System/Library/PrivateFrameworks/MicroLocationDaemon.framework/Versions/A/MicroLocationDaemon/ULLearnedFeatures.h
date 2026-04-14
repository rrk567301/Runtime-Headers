@class NSObject;
@protocol OS_dispatch_queue;

@interface ULLearnedFeatures : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct LFV2Handle { } *handle;
@property (nonatomic) struct LFV2Keypoints { } *keypoints;

+ (BOOL)isAvailable;
+ (id)learnedFeatures;
+ (struct __CVBuffer { } *)_createLearnedFeaturesPixelBufferFromPhotoPixelBuffer:(struct __CVBuffer { } *)a0 andOrientation:(unsigned int)a1 requestId:(id)a2;
+ (void)_writePhotoToDisk:(id)a0 requestId:(id)a1;

- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_createLFV2HandleIfNeeded;
- (id)featuresArrayFutureWithPhotoPixelBuffer:(struct __CVBuffer { } *)a0 andOrientation:(unsigned int)a1 requestId:(id)a2;
- (void)runWithPhotoPixelBuffer:(struct __CVBuffer { } *)a0 andOrientation:(unsigned int)a1 requestId:(id)a2 handler:(id /* block */)a3;

@end
