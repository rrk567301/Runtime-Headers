@class AVAudioDeviceList, AVAudioDevice, AVConferenceXPCClient, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioClient : NSObject {
    unsigned int _connectionAttempts;
    id /* block */ _mutedTalkerNotificationHandler;
    id /* block */ _muteStateChangedHandler;
    NSObject<OS_dispatch_queue> *_clientAudioSessionQueue;
    id /* block */ _secureMicrophoneEngagedHandler;
    BOOL _audioSessionIsActive;
    BOOL _audioSessionIsStarted;
    NSCondition *_audioSessionRefCondVar;
    AVConferenceXPCClient *_xpcConnection;
    BOOL _mixingVoiceWithMediaEnabled;
    BOOL _followSystemInputEnabled;
    BOOL _followSystemOutputEnabled;
    int _processId;
}

@property (retain, nonatomic) AVAudioDeviceList *deviceList;
@property (readonly, nonatomic) AVAudioDevice *currentInputDevice;
@property (readonly, nonatomic) AVAudioDevice *currentOutputDevice;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled;
@property (nonatomic) id /* block */ changeListener;

+ (id)sharedInstance;
+ (id)defaultOutputDevice;
+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (id)defaultInputDevice;
+ (BOOL)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(BOOL)a0;
+ (BOOL)setInputDevice:(id)a0;
+ (void)setMixingVoiceWithMediaEnabled:(BOOL)a0;
+ (void)setAudioSessionProperties:(id)a0;
+ (void)setFollowSystemInputEnabled:(BOOL)a0;
+ (void)setFollowSystemOutputEnabled:(BOOL)a0;
+ (BOOL)setOutputDevice:(id)a0;
+ (int)unregisterFromMutedTalkerNotifications;
+ (BOOL)hasActiveAudioSession;
+ (BOOL)isMixingVoiceWithMediaEnabled;
+ (int)registerForMutedTalkerNotifications:(id /* block */)a0;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
+ (void)resetAudioSessionOutputPortOverride;
+ (int)setMuteStateChangedHandler:(id /* block */)a0;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (void)stopAudioSession;

- (void)dealloc;
- (id)initSharedInstance;
- (id)init;
- (id)inputDevices;
- (BOOL)setupXPCConnection;
- (id)devices;
- (id)outputDevices;
- (BOOL)setInputDevice:(id)a0;
- (void)setAudioSessionProperties:(id)a0;
- (void)setFollowSystemInputEnabled:(BOOL)a0;
- (void)setFollowSystemOutputEnabled:(BOOL)a0;
- (BOOL)setOutputDevice:(id)a0;
- (int)unregisterFromMutedTalkerNotifications;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupXPCConnection;
- (void)dispatchedHandleMuteStateChangedEventWithXPCArguments:(id)a0;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)a0;
- (BOOL)hasActiveAudioSession;
- (void)registerBlocksForDelegateNotifications;
- (int)registerForMutedTalkerNotifications:(id /* block */)a0;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
- (BOOL)reregisterClientSideHandlersOverXPC;
- (BOOL)reregisterMuteStateChangedHandlerOverXPC;
- (BOOL)reregisterMutedTalkerNotificationOverXPC;
- (void)resetAudioSessionOutputPortOverride;
- (void)resetXPCConnection;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (int)setMuteStateChangedEventHandler:(id /* block */)a0;
- (void)setMuteStateChangedHandlerInternal:(id /* block */)a0;
- (BOOL)shouldSetUpXPCConnection;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
- (void)stopAudioSession;
- (void)unregisterBlocksForDelegateNotifications;

@end
