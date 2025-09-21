@class NSStatusItem;
@protocol MutableMediaStateTrackerDelegate, MutableMediaStateTrackerDataSource;

@interface MutableMediaStateTracker : NSObject {
    unsigned long long _mutableMediaState;
    NSStatusItem *_mediaCaptureStatusItem;
}

@property (weak, nonatomic) id<MutableMediaStateTrackerDataSource> dataSource;
@property (weak, nonatomic) id<MutableMediaStateTrackerDelegate> delegate;
@property (readonly, nonatomic) long long muteButtonStateForOverallMediaState;
@property (readonly, nonatomic, getter=isAnyPagePlayingAudio) char anyPagePlayingAudio;
@property (readonly, nonatomic) char doesAnyPageHaveMediaCaptureDevice;
@property (readonly, nonatomic) char doesAnyPageHaveActiveMediaCaptureDevice;
@property (readonly, nonatomic) char doesAnyPageHaveMutedMediaCaptureDevice;
@property (readonly, nonatomic) char doesAnyPageHaveActiveCamera;
@property (readonly, nonatomic) char doesAnyPageHaveActiveMicrophone;
@property (readonly, nonatomic, getter=isAnyPageUsingCameraOnly) char anyPageUsingCameraOnly;
@property (readonly, nonatomic, getter=isAnyPageUsingMicrophoneOnly) char anyPageUsingMicrophoneOnly;
@property (readonly, nonatomic) char allPagesPlayingMutableMediaAreMuted;
@property (readonly, nonatomic, getter=isAnyPageUsingCamera) char anyPageUsingCamera;
@property (readonly, nonatomic, getter=isAnyPageUsingMicrophone) char anyPageUsingMicrophone;
@property (readonly, nonatomic, getter=isAnyPageUsingScreenCapture) char anyPageUsingScreenCapture;

- (void).cxx_destruct;
- (void)_didRequestToFocusMediaSourceFromMenuItem:(id)a0;
- (id)_menuItemsForRequestingToFocusMediaSources:(id)a0;
- (void)updateOverallAudioState;
- (void)updateStatusItem;

@end
