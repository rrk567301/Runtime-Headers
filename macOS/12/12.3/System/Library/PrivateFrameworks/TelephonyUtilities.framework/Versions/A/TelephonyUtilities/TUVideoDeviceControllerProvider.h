@class VideoAttributes, NSString, NSArray, TUVideoEffect, AVConferencePreview;
@protocol TUVideoDeviceControllerProviderDelegate;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider>

@property (readonly, nonatomic) AVConferencePreview *preview;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (nonatomic) BOOL allowsCameraBlurToggling;
@property (nonatomic, getter=isCameraBlurEnabled) BOOL cameraBlurEnabled;
@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (readonly, nonatomic) NSArray *availableVideoEffects;

+ (void)prewarm;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startPreview;
- (void)stopPreview;
- (void)setLocalCameraWithUID:(id)a0;
- (id)localVideoLayer:(BOOL)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (void)pausePreview;
- (void)getSnapshot;
- (BOOL)supportsCameraBlurForDevice:(id)a0;
- (void)setCameraZoomFactor:(double)a0;
- (void)rampCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)beginPIPToPreviewAnimation;
- (void)endPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)endPreviewToPIPAnimation;
- (void)setLocalScreenAttributes:(id)a0;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didGetSnapshot:(id)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0;
- (void)captureDevicesChanged:(id)a0;

@end
