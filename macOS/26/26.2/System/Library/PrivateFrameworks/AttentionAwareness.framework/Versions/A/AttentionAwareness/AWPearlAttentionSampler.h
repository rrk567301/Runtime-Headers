@class NSObject;
@protocol OS_dispatch_source, SamplingOperation;

@interface AWPearlAttentionSampler : AWAttentionSampler <PearlCameraInterfaceMessaging> {
    id<SamplingOperation> _unitTestOperation;
    id<SamplingOperation> _currentOperation;
    id<SamplingOperation> _finishingOperation;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    unsigned long long _operationCreateTime;
    unsigned long long _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
    BOOL _carPlayConnected;
    BOOL _useAVFoundation;
    BOOL _unitTest;
    struct { BOOL AWAttentionSamplerActivateAttentionDetection; BOOL AWAttentionSamplerActivateMotionDetection; BOOL AWAttentionSamplerActivatePersonDetection; } _currentOptions;
    BOOL _signpostLogged;
    int _activeOperationNotification;
    BOOL _enrollOrMatchOperationUnderway;
}

- (BOOL)isMatchOrEnrollOperationRunning;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(struct { BOOL x0; BOOL x1; BOOL x2; })a2;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;
- (void)setCurrentState:(int)a0;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (int)currentState;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0 ignoreDisplayState:(BOOL)a1;
- (void)cameraActivityNotification:(int)a0 data:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; unsigned long long x7; float x8[16]; unsigned long long x9; float x10; unsigned long long x11; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x12; } x0; int x1; int x2; int x3; } *)a1 forOperation:(id)a2;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)updateFaceState:(int)a0 withFaceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; unsigned long long x7; float x8[16]; unsigned long long x9; float x10; unsigned long long x11; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x12; } *)a1;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)a0 options:(struct { BOOL x0; BOOL x1; BOOL x2; })a1;
- (id)unitTestSampler;
- (void).cxx_destruct;
- (id)createNewSamplingOperation;
- (id)initForUnitTest:(BOOL)a0 useAVFoundation:(BOOL)a1;
- (void)finishingFaceDetect:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)startStalledTimerForOperation:(id)a0;
- (void)updateFaceState:(int)a0;
- (void)cancelFaceDetect:(id)a0;
- (void)cancelStalledTimer;
- (void)updateSuppressedMaskWithDisplayState:(BOOL)a0 smartCoverClosed:(BOOL)a1 carPlayConnected:(BOOL)a2;
- (void)faceDetectStalled:(id)a0;

@end
