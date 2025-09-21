@class NSArray, NSString, NSPointerArray, NSObject, NSNumber;
@protocol OS_os_transaction;

@interface MXCoreSession : MXCoreSessionBase

@property (retain) NSArray *deviceUUIDs;
@property (nonatomic) char canBeNowPlayingApp;
@property (nonatomic) unsigned int priorityScore;
@property (nonatomic) char modeSetByClient;
@property (readonly) NSString *remoteDeviceID;
@property (nonatomic) struct __SecTask { } *secTask;
@property (nonatomic) NSObject<OS_os_transaction> *playingOSTransaction;
@property (nonatomic) NSObject<OS_os_transaction> *recordingOSTransaction;
@property (nonatomic) char isTryingToGoActive;
@property (retain, nonatomic) NSPointerArray *interruptedSessionList;
@property (nonatomic) char hasEntitlementToSetPreferredOutputAudioScoreForSmartRouting;
@property (retain) NSNumber *preferredOutputAudioScoreForSmartRouting;

+ (id)copyMXCoreSession:(unsigned long long)a0;
+ (id)copyMXCoreSessionForMXSessionID:(unsigned long long)a0;

- (void)dealloc;
- (int)beginInterruption;
- (id)copyMXSessionList;
- (int)endInterruption:(id)a0;
- (int)handleInterruptionResponse:(int)a0;
- (char)hasPhoneCallBehavior;
- (id)initWithMXSession:(id)a0 clientPID:(int)a1 remoteDeviceID:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 mxCoreSessionID:(unsigned long long)a4;
- (char)isModeValidForCategory:(id)a0;
- (char)isPlayAndRecordCategory;
- (char)isRecordCategory;
- (void)registerMXSession:(id)a0 mxCoreSessionID:(id)a1;
- (void)setEnableBluetoothRecordingPreference:(char)a0;
- (int)setInterruptionStyleAtClientRequest:(unsigned int)a0;
- (int)setUpDefaultBehavioursForCategoryAtClientRequest;
- (int)setUpDefaultInterruptionStyleForCategoryAndMode;
- (void)unregisterMXSession:(unsigned long long)a0;
- (int)updateAudioCategory:(id)a0;
- (int)updateAudioMode:(id)a0;
- (void)updateAudioSessionID:(unsigned int)a0;
- (void)updateDeviceUUIDs:(id)a0;
- (int)updateInterruptionStyle:(unsigned int)a0;
- (int)updateIsPlaying:(char)a0;
- (int)updateIsRecording:(char)a0;
- (void)updatePlayingOSTransaction;
- (void)updateRecordingOSTransaction;

@end
