@class FigWeakReference, NSObject;
@protocol OS_dispatch_queue, BWMetadataDetectedResultsObserver;

@interface BWAppClipCodeNode : BWNode {
    NSObject<OS_dispatch_queue> *_processingQueue;
    FigWeakReference *_weakSelf;
    char _haveInputTransform;
    int _rotationDegrees;
    char _mirroringHorizontal;
    char _mirroringVertical;
    long long _lastAppClipCodeCount;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)initWithProcessingQueuePriority:(unsigned int)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
