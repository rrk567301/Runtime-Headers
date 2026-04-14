@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject {
    AVSampleBufferGeneratorInternal *_generator;
}

+ (void)initialize;
+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0 timebase:(struct OpaqueCMTimebase { } *)a1;
- (struct OpaqueFigSampleGenerator { } *)_figSampleGenerator;
- (id)makeBatch;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0 error:(id *)a1;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0 addingToBatch:(id)a1 error:(id *)a2;

@end
