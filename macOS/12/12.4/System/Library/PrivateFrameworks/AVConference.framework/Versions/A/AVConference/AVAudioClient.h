@class AVAudioDeviceList, AVAudioDevice, AVConferenceXPCClient, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioClient : NSObject {
    id /* block */ _mutedTalkerNotificationHandler;
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
+ (BOOL)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(BOOL)a0;
+ (BOOL)setInputDevice:(id)a0;
+ (id)currentInputDevice;
+ (int)unregisterFromMutedTalkerNotifications;
+ (void)setMixingVoiceWithMediaEnabled:(BOOL)a0;
+ (id)currentOutputDevice;
+ (BOOL)setOutputDevice:(id)a0;
+ (void)setFollowSystemInputEnabled:(BOOL)a0;
+ (void)setFollowSystemOutputEnabled:(BOOL)a0;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (void)stopAudioSession;
+ (BOOL)isMixingVoiceWithMediaEnabled;
+ (void)setAudioSessionProperties:(id)a0;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (BOOL)hasActiveAudioSession;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
+ (int)registerForMutedTalkerNotifications:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (id)devices;
- (id)outputDevices;
- (id)initSharedInstance;
- (BOOL)setInputDevice:(id)a0;
- (id)inputDevices;
- (int)unregisterFromMutedTalkerNotifications;
- (BOOL)setOutputDevice:(id)a0;
- (void)setFollowSystemInputEnabled:(BOOL)a0;
- (void)setFollowSystemOutputEnabled:(BOOL)a0;
- (void)stopAudioSession;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (void)setAudioSessionProperties:(id)a0;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasActiveAudioSession;
- (BOOL)setupXPCConnection;
- (void)registerBlocksForDelegateNotifications;
- (void)cleanupXPCConnection;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)unregisterBlocksForDelegateNotifications;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)a0;
- (void)resetAudioSessionOutputPortOverride;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
- (int)registerForMutedTalkerNotifications:(id /* block */)a0;

@end
