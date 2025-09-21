@class NSString, AVAudioSession;

@interface AVVCSessionManager : NSObject {
    char mShouldDuckOthers;
    char mIsMiniDuckingEnabled;
    char mShouldEnableMiniDucking;
    char mShouldDisableMiniDucking;
    char mSessionNeedsVolumeControl;
    char mSessionNeedsRoutingControl;
    char mSessionOutputIsWirelessSplitter;
    char mIsOtherAudioPlaying;
    char mRouteHasDoAPSupport;
    char mOutputSupportsSWVolume;
    char mDeviceIsIOSAccessory;
    char mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mSessionManagerLock;
    unsigned long long mPreviousHardwareControlFlags;
    long long mPreviousActivationMode;
    NSString *mPreviousActivationDeviceUID;
    NSString *mPreviousSessionCategory;
    NSString *mPreviousSessionMode;
    unsigned long long mPreviousSessionCategoryOptions;
    int mPreviousIOBufferFrameSize;
    char mEnableSmartRoutingConsideration;
}

@property (retain, nonatomic) AVAudioSession *audioSession;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSession:(id)a0;
- (char)isCurrentInputBuiltInMic;
- (int)setupOneTimeSessionSettingsForClient:(long long)a0;

@end
