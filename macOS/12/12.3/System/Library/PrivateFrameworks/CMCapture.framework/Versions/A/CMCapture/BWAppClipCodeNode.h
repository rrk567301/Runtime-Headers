@class FigWeakReference, NSObject;
@protocol OS_dispatch_queue, BWMetadataDetectedResultsObserver;

@interface BWAppClipCodeNode : BWNode {
    NSObject<OS_dispatch_queue> *_processingQueue;
    FigWeakReference *_weakSelf;
    BOOL _haveInputTransform;
    int _rotationDegrees;
    BOOL _mirroringHorizontal;
    BOOL _mirroringVertical;
    long long _lastAppClipCodeCount;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_updateInputRequirements;
- (id)initWithProcessingQueuePriority:(unsigned int)a0;
- (void)_endAppClipCodeSession;
- (void)_startAppClipCodeSession;
- (id)_pixelFormatsSupportedByAppC3D;
- (BOOL)_shouldEmitSBufForAppClipCodeCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
