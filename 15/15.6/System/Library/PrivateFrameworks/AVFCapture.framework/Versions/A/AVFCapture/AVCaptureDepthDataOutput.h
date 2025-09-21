@class NSString, AVCaptureDepthDataOutputInternal, NSObject;
@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureDepthDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) char alwaysDiscardsLateDepthData;
@property (nonatomic, getter=isFilteringEnabled) char filteringEnabled;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeConnection:(id)a0;
- (char)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (char)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)companionSettingsVideoDataOutput;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setCompanionSettingsVideoDataOutput:(id)a0;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;

@end
