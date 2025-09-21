@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {
    char _shouldAlterPreviewState;
    char _wantsPreview;
    char _wantsPausedPreview;
    char _wantsUnpausedPreview;
}

@property (retain, nonatomic) AVConferencePreview *conferencePreview;
@property (readonly, nonatomic) char isPreviewRunning;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) void *localVideoBackLayer;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startPreview;
- (void)stopPreview;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didStopPreview;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)pausePreview;
- (void)setLocalScreenAttributes:(id)a0;
- (void)_avDaemonConnected;
- (char)_shouldPreviewBeRunning;
- (void)_updatePreviewState;
- (void)avChat:(id)a0 setLocalPortraitRatio:(struct CGSize { double x0; double x1; })a1 localLandscapeRatio:(struct CGSize { double x0; double x1; })a2;
- (void)beginAnimationToPIP;
- (void)beginAnimationToPreview;
- (void)endAnimationToPIP;
- (void)endAnimationToPreview;
- (void)unpausePreview;

@end
