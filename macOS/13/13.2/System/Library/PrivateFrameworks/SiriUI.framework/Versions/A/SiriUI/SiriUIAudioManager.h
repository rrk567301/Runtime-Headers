@class NSTimer;

@interface SiriUIAudioManager : NSObject {
    long long _lastSiriEvent;
}

@property BOOL isAudioPaused;
@property (retain) NSTimer *bluetoothAudioResumeTimer;
@property (retain) NSTimer *audioUnduckTimer;
@property (nonatomic) BOOL switchedBluetoothDeviceToSCO;
@property (nonatomic) unsigned int bluetoothOutputDevice;
@property (nonatomic) float savedBluetoothOutputVolume;
@property (nonatomic) unsigned int savedBluetoothOutputVolumeDevice;
@property long long lastSiriEvent;
@property BOOL isSiriUIVisible;
@property BOOL isAcousticIDRecording;

+ (id)sharedManager;
+ (BOOL)isAudioDucked;
+ (BOOL)isFanDuckingEnabled;
+ (BOOL)isMediaPaused;
+ (unsigned int)currentBluetoothOutputDevice;
+ (BOOL)isDoAPSupportedForBluetoothAudioDevice:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)siriIdleAndQuietNotificationFired;
- (void)siriThinkingNotificationFired;
- (void)siriListeningNotificationFired;
- (void)siriSuccessNotificationFired;
- (void)siriStoppedListeningFired;
- (void)siriUIAppeared;
- (void)siriUIDisappeared;
- (void)siriStartedSpeakingNotificationFired;
- (void)siriStoppedSpeakingNotificationFired;
- (void)bluetoothAudioDidChangeNotification:(id)a0;
- (void)resumeAudio;
- (void)unduckAudioFromTimer;
- (void)prepareBluetoothForSiriSessionAudioRecording;
- (void)beginAudioManagementSession;
- (void)endAudioManagementSession;
- (void)resumeAudioWithBluetoothTimer;
- (void)siriEventWillChangeToEvent:(long long)a0;
- (void)handleSiriStartedListeningEvent;
- (void)handleSiriStoppedListeningEvent;
- (void)handleSiriStoppedSpeakingEvent;
- (void)handleSiriStartedSpeakingEvent;
- (BOOL)setBluetoothAudioFormat:(unsigned int)a0 forDevice:(unsigned int)a1;
- (void)stashBluetoothVolumeForOutputDevice:(unsigned int)a0;
- (void)restoreBluetoothVolumeOutputForDevice:(unsigned int)a0;

@end
