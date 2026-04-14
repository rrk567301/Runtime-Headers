@class NSArray, NSString, NSObject;
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

+ (id)copyMXCoreSession:(unsigned long long)a0;
+ (id)copyMXCoreSessionForMXSessionID:(unsigned long long)a0;

- (void)dealloc;
- (int)beginInterruption;
- (id)copyMXSessionList;
- (int)endInterruption:(id)a0;
- (BOOL)hasPhoneCallBehavior;
- (id)initWithMXSession:(id)a0 clientPID:(int)a1 remoteDeviceID:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 mxCoreSessionID:(unsigned long long)a4;
- (BOOL)isModeValidForCategory:(id)a0;
- (BOOL)isPlayAndRecordCategory;
- (BOOL)isRecordCategory;
- (void)registerMXSession:(id)a0 mxCoreSessionID:(id)a1;
- (void)setEnableBluetoothRecordingPreference:(BOOL)a0;
- (void)unregisterMXSession:(unsigned long long)a0;
- (int)updateAudioCategory:(id)a0;
- (int)updateAudioMode:(id)a0;
- (void)updateAudioSessionID:(unsigned int)a0;
- (void)updateDeviceUUIDs:(id)a0;
- (int)updateIsPlaying:(BOOL)a0;
- (int)updateIsRecording:(BOOL)a0;
- (void)updatePlayingOSTransaction;
- (void)updateRecordingOSTransaction;

@end
