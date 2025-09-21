@class AVAudioDeviceList, AVAudioDevice, AVConferenceXPCClient, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioClient : NSObject {
    unsigned int _connectionAttempts;
    id /* block */ _mutedTalkerNotificationHandler;
    id /* block */ _muteStateChangedHandler;
    NSObject<OS_dispatch_queue> *_clientAudioSessionQueue;
    id /* block */ _secureMicrophoneEngagedHandler;
    char _audioSessionIsActive;
    char _audioSessionIsStarted;
    NSCondition *_audioSessionRefCondVar;
    AVConferenceXPCClient *_xpcConnection;
    char _mixingVoiceWithMediaEnabled;
    char _followSystemInputEnabled;
    char _followSystemOutputEnabled;
    int _processId;
}

@property (retain, nonatomic) AVAudioDeviceList *deviceList;
@property (readonly, nonatomic) AVAudioDevice *currentInputDevice;
@property (readonly, nonatomic) AVAudioDevice *currentOutputDevice;
@property (nonatomic, getter=isMicrophoneMuted) char microphoneMuted;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) char mixingVoiceWithMediaEnabled;
@property (nonatomic) id /* block */ changeListener;

+ (id)sharedInstance;
+ (char)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(char)a0;
+ (char)setInputDevice:(id)a0;
+ (void)setMixingVoiceWithMediaEnabled:(char)a0;
+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (void)setAudioSessionProperties:(id)a0;
+ (void)setFollowSystemInputEnabled:(char)a0;
+ (void)setFollowSystemOutputEnabled:(char)a0;
+ (char)setOutputDevice:(id)a0;
+ (int)unregisterFromMutedTalkerNotifications;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (char)hasActiveAudioSession;
+ (char)isMixingVoiceWithMediaEnabled;
+ (int)registerForMutedTalkerNotifications:(id /* block */)a0;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
+ (void)resetAudioSessionOutputPortOverride;
+ (int)setMuteStateChangedHandler:(id /* block */)a0;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (void)stopAudioSession;

- (void)dealloc;
- (id)init;
- (id)devices;
- (id)outputDevices;
- (id)inputDevices;
- (id)initSharedInstance;
- (char)setInputDevice:(id)a0;
- (void)setAudioSessionProperties:(id)a0;
- (void)setFollowSystemInputEnabled:(char)a0;
- (void)setFollowSystemOutputEnabled:(char)a0;
- (char)setOutputDevice:(id)a0;
- (int)unregisterFromMutedTalkerNotifications;
- (void)cleanUpMuteStateChangedHandler;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupXPCConnection;
- (void)dispatchedHandleMuteStateChangedEventWithXPCArguments:(id)a0;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)a0;
- (char)hasActiveAudioSession;
- (void)registerBlocksForDelegateNotifications;
- (int)registerForMutedTalkerNotifications:(id /* block */)a0;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
- (char)reregisterClientSideHandlersOverXPC;
- (char)reregisterMuteStateChangedHandlerOverXPC;
- (char)reregisterMutedTalkerNotificationOverXPC;
- (void)resetAudioSessionOutputPortOverride;
- (void)resetXPCConnection;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (int)setMuteStateChangedEventHandler:(id /* block */)a0;
- (char)setupXPCConnection;
- (char)shouldSetUpXPCConnection;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
- (void)stopAudioSession;
- (void)unregisterBlocksForDelegateNotifications;

@end
