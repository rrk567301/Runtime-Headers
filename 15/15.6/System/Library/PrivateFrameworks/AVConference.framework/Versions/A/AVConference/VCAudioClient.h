@class AVAudioDevice, VCAudioIO, VCAudioManager;

@interface VCAudioClient : NSObject {
    unsigned int _state;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    double _lastAudioSessionStart;
    char _isOnHold;
    struct VCAudioClientSettings { char isValid; char enableAudioPreWarming; int operatingMode; int deviceRole; char audioClockDeviceEnabled; char networkUplinkClockUsesBaseband; } _selectedSettings;
    struct VCAudioClientSettings { char isValid; char enableAudioPreWarming; int operatingMode; int deviceRole; char audioClockDeviceEnabled; char networkUplinkClockUsesBaseband; } _requestedSettings;
    unsigned int _audioSessionId;
    unsigned int _spatialAudioRegistered;
    void **_audioSession;
    VCAudioManager *_audioManager;
    char _isMixingVoiceWithMediaEnabled;
}

@property (retain, nonatomic) AVAudioDevice *inputDevice;
@property (retain, nonatomic) AVAudioDevice *outputDevice;
@property (readonly, nonatomic) int processId;
@property (nonatomic) char isMuted;
@property (retain, nonatomic) VCAudioIO *audioIO;
@property (nonatomic) char isMutedTalkerNotificationRegistered;
@property (nonatomic) char isMutedStateChangeHandlerRegistered;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) char mixingVoiceWithMediaEnabled;
@property (nonatomic, getter=isFollowSystemInputEnabled) char followSystemInput;
@property (nonatomic, getter=isFollowSystemOutputEnabled) char followSystemOutput;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)setAudioSessionProperties:(id)a0;
- (char)startWithError:(id *)a0;
- (char)stopWithError:(id *)a0;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (id)getCurrentAudioDeviceWithType:(char)a0;
- (id)initWithProcessId:(int)a0;
- (char)resetAudioSessionOutputPortOverride:(id *)a0;
- (void)serverDidDie;
- (char)setCurrentAudioDevice:(id)a0 type:(char)a1;
- (void)startAudioIOWithCompletionHandler:(id /* block */)a0;
- (char)startAudioSessionWithError:(id *)a0;
- (void)stopAudioIOWithCompletionHandler:(id /* block */)a0;
- (char)stopAudioSessionWithError:(id *)a0;

@end
