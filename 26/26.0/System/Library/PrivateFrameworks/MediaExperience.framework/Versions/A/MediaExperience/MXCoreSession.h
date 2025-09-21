@class NSArray, NSString, NSPointerArray, NSObject, NSNumber;
@protocol OS_os_transaction;

@interface MXCoreSession : MXCoreSessionBase

@property (retain) NSArray *deviceUUIDs;
@property (nonatomic) BOOL canBeNowPlayingApp;
@property (nonatomic) unsigned int priorityScore;
@property (nonatomic) BOOL modeSetByClient;
@property (readonly) NSString *remoteDeviceID;
@property (nonatomic) struct __SecTask { } *secTask;
@property (nonatomic) NSObject<OS_os_transaction> *playingOSTransaction;
@property (nonatomic) NSObject<OS_os_transaction> *recordingOSTransaction;
@property (nonatomic) BOOL isTryingToGoActive;
@property (retain, nonatomic) NSPointerArray *interruptedSessionList;
@property (nonatomic) BOOL hasEntitlementToSetPreferredOutputAudioScoreForSmartRouting;
@property (retain) NSNumber *preferredOutputAudioScoreForSmartRouting;

+ (id)copyMXCoreSession:(unsigned long long)a0;
+ (id)copyMXCoreSessionForMXSessionID:(unsigned long long)a0;

- (void)updateDeviceUUIDs:(id)a0;
- (void)setEnableBluetoothRecordingPreference:(BOOL)a0;
- (BOOL)isRecordCategory;
- (int)updateInterruptionStyle:(unsigned int)a0;
- (int)setInterruptionStyleAtClientRequest:(unsigned int)a0;
- (void)dealloc;
- (int)updateAudioMode:(id)a0;
- (id)initWithMXSession:(id)a0 clientPID:(int)a1 remoteDeviceID:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 mxCoreSessionID:(unsigned long long)a4;
- (id)copyMXSessionList;
- (int)updateIsPlaying:(BOOL)a0;
- (void)updateRecordingOSTransaction;
- (int)beginInterruption;
- (int)updateAudioCategory:(id)a0;
- (int)updateIsRecording:(BOOL)a0;
- (BOOL)isPlayAndRecordCategory;
- (BOOL)isModeValidForCategory:(id)a0;
- (BOOL)hasPhoneCallBehavior;
- (int)setUpDefaultInterruptionStyleForCategoryAndMode;
- (void)updatePlayingOSTransaction;
- (int)handleInterruptionResponse:(int)a0;
- (int)setUpDefaultBehavioursForCategoryAtClientRequest;
- (void)registerMXSession:(id)a0 mxCoreSessionID:(id)a1;
- (void)updateAudioSessionID:(unsigned int)a0;
- (int)endInterruption:(id)a0;
- (void)unregisterMXSession:(unsigned long long)a0;

@end
