@class VideoAttributes, NSString, NSArray, TUVideoEffect, AVConferencePreview, AVCaptureDevice;
@protocol TUVideoDeviceControllerProviderDelegate;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {
    NSArray *_cachedInputDevices;
    BOOL _isAVCaptureDeviceReady;
}

@property (readonly, nonatomic) AVConferencePreview *preview;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (nonatomic, getter=isReactionEffectGestureEnabled) BOOL reactionEffectGestureEnabled;
@property (nonatomic, getter=isStudioLightEnabled) BOOL studioLightEnabled;
@property (nonatomic, getter=isCameraBlurEnabled) BOOL cameraBlurEnabled;
@property (readonly, nonatomic) BOOL hasAvailableDeskViewCameras;
@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate;
@property (readonly, nonatomic) AVCaptureDevice *userPreferredCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, nonatomic) NSArray *availableVideoEffects;

+ (void)prewarm;

- (void)setBackgroundReplacementEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isBackgroundReplacementEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startPreview;
- (void)stopPreview;
- (void)didPausePreview;
- (void)didGetSnapshot:(id)a0;
- (void)didStartPreview;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraCinematicFramingAvailabilityDidChange:(BOOL)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)a0 reason:(long long)a1;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0;
- (void)captureDevicesChanged:(id)a0;
- (void)centerStageAvailableChangedNotification:(id)a0;
- (long long)currentBackgroundBlurControlMode;
- (void)didChangeLocalCameraUID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didDetectSensitiveContentWithAnalysis:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (void)invalidateInputDevicesCache;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (id)localVideoLayer:(BOOL)a0;
- (void)notifyCenterStageEnabled:(BOOL)a0;
- (void)pausePreview;
- (void)queryAVCaptureDeviceIfNeeded;
- (id)queryAVCaptureDeviceWithType:(id)a0 mediaType:(id)a1 position:(long long)a2;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)setCameraZoomFactor:(double)a0;
- (void)setCurrentBackgroundBlurControlMode:(long long)a0;
- (void)setFollowSystemCameraEnabled:(BOOL)a0;
- (void)setLocalCameraWithUID:(id)a0;
- (void)setLocalScreenAttributes:(id)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (void)setLocalVideoLayerHost:(id)a0 front:(BOOL)a1;
- (BOOL)supportsCameraBlurForDevice:(id)a0;

@end
