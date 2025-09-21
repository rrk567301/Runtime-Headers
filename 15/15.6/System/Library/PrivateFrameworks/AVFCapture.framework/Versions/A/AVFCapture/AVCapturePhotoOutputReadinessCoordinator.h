@class AVWeakReferencingDelegateStorage, NSMutableArray;
@protocol AVCapturePhotoOutputReadinessCoordinatorDelegate;

@interface AVCapturePhotoOutputReadinessCoordinator : NSObject {
    AVWeakReferencingDelegateStorage *_delegateStorage;
    long long _captureReadiness;
    struct AVCapturePhotoOutputCaptureReadinessState { char sessionIsRunning; char autoDeferredPhotoDeliveryEnabled; char responsiveCaptureEnabled; int numberOfPhotoCapturesInflight; long long latestCaptureUniqueID; long long inflightNonOverlappingCaptureUniqueID; long long inflightUniqueIDWaitingForCapture; long long inflightUniqueIDWaitingForProcessing; } _captureReadinessState;
    NSMutableArray *_trackedPhotoSettingsArray;
}

@property (weak) id<AVCapturePhotoOutputReadinessCoordinatorDelegate> delegate;
@property (readonly, nonatomic) long long captureReadiness;

+ (long long)_captureReadinessFromReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { char x0; char x1; char x2; int x3; long long x4; long long x5; long long x6; long long x7; })a0;
+ (char)_isOverlappingCaptureSupportedForPhotoSettings:(id)a0 autoDeferredPhotoDeliveryEnabled:(char)a1 responsiveCaptureEnabled:(char)a2;

- (void)dealloc;
- (id)_queue;
- (void)_invokeDelegateCallbackWithBlock:(id /* block */)a0;
- (void)_photoOutputDidUpdateCaptureReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { char x0; char x1; char x2; int x3; long long x4; long long x5; long long x6; long long x7; })a0;
- (void)_setDelegate:(id)a0 queue:(id)a1;
- (void)_updateCaptureReadinessWithDelegate:(id)a0;
- (id)initWithPhotoOutput:(id)a0;
- (void)startTrackingCaptureRequestUsingPhotoSettings:(id)a0;
- (void)stopTrackingCaptureRequestUsingPhotoSettingsUniqueID:(long long)a0;

@end
