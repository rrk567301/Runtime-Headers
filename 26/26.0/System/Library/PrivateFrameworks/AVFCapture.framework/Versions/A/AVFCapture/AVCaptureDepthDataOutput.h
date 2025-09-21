@class NSString, AVCaptureDepthDataOutputInternal, NSObject;
@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureDepthDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) BOOL alwaysDiscardsLateDepthData;
@property (nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)removeConnection:(id)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)init;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (id)companionSettingsVideoDataOutput;
- (void)setCompanionSettingsVideoDataOutput:(id)a0;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;

@end
