@class NSString, BWVideoFormat, BWPixelBufferPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWFaceTrackingNode : BWNode {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    char _processing;
    struct opaqueCMSimpleQueue { } *_nextSbufQueue;
    char _setupDone;
    char _structuredLightOccluded;
    char _passthroughInputs;
    NSString *_depthAttachedMediaKey;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    int _faceTrackingMaxFaces;
    char _faceTrackingUsesFaceRecognition;
    float _faceTrackingNetworkFailureThresholdMultiplier;
    float _faceTrackingFailureFieldOfViewModifier;
    char _skipProcessing;
    BWVideoFormat *_uncompressedVideoFormat;
    BWPixelBufferPool *_uncompressedVideoBufferPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decompressionLock;
    char _addMesh;
    char _addDebugInfo;
}

@property (nonatomic) char frontCamera;
@property (nonatomic) char mirrored;
@property (nonatomic) int orientation;
@property (nonatomic) int maxFaces;
@property (nonatomic) char usesFaceRecognition;
@property (nonatomic) char faceTrackingPlusEnabled;
@property (nonatomic) float networkFailureThresholdMultiplier;
@property (nonatomic) float trackingFailureFieldOfViewModifier;
@property (nonatomic) char skipProcessing;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithFigThreadPriority:(unsigned int)a0 pearlModuleType:(int)a1 useUnfilteredDepth:(char)a2 queueDepth:(unsigned int)a3 passthroughInputs:(char)a4 allowPixelTransfer:(char)a5;
- (id)nodeSubType;

@end
