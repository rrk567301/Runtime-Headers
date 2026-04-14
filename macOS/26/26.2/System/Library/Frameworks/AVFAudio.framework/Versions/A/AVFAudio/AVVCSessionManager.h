@class NSString, AVAudioSession;

@interface AVVCSessionManager : NSObject {
    BOOL mShouldDuckOthers;
    BOOL mIsMiniDuckingEnabled;
    BOOL mShouldEnableMiniDucking;
    BOOL mShouldDisableMiniDucking;
    BOOL mSessionNeedsVolumeControl;
    BOOL mSessionNeedsRoutingControl;
    BOOL mSessionOutputIsWirelessSplitter;
    BOOL mIsOtherAudioPlaying;
    BOOL mRouteHasDoAPSupport;
    BOOL mOutputSupportsSWVolume;
    BOOL mDeviceIsIOSAccessory;
    BOOL mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mSessionManagerLock;
    unsigned long long mPreviousHardwareControlFlags;
    long long mPreviousActivationMode;
    NSString *mPreviousActivationDeviceUID;
    NSString *mPreviousSessionCategory;
    NSString *mPreviousSessionMode;
    unsigned long long mPreviousSessionCategoryOptions;
    int mPreviousIOBufferFrameSize;
    BOOL mEnableSmartRoutingConsideration;
}

@property (retain, nonatomic) AVAudioSession *audioSession;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)isCurrentInputBuiltInMic;
- (BOOL)setIsUsingBuiltInMicForRecording:(BOOL)a0 error:(id *)a1;
- (int)setupOneTimeSessionSettingsForClient:(long long)a0;

@end
