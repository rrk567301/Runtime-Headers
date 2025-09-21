@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider : CSAudioRecorder

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *fp;

+ (void)createSharedAudioSession;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)metrics;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (char)isNarrowBandWithStreamHandleId:(unsigned long long)a0;
- (void)_readAudioBufferAndFeed;
- (char)activateAudioSessionWithReason:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)alertStartTime;
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)a0 recordDeviceIndicator:(id)a1;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (void)configureAlertBehavior:(id)a0 audioStreamHandleId:(unsigned long long)a1;
- (char)deactivateAudioSession:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (char)duckOthersOption;
- (void)enableMiniDucking:(char)a0;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)a0 enable:(char)a1;
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)a0;
- (id)getPlaybackRouteForStreamID:(unsigned long long)a0;
- (char)isRecordingWithRecordDeviceIndicator:(id)a0;
- (char)isSessionCurrentlyActivated;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (char)playAlertSoundForType:(long long)a0 recordDevideIndicator:(id)a1;
- (char)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)a0 withAlertOverride:(long long)a1;
- (char)prepareAudioStreamRecord:(id)a0 recordDeviceIndicator:(id)a1 error:(id *)a2;
- (char)prewarmAudioSessionWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)a0 recordDeviceIndicator:(id)a1;
- (id)recordRouteWithRecordDeviceIndicator:(id)a0;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)a0;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)a0;
- (char)setAlertSoundFromURL:(id)a0 forType:(long long)a1 force:(char)a2;
- (void)setAudioSessionEventDelegate:(id)a0;
- (void)setContext:(id)a0 completion:(id /* block */)a1;
- (char)setCurrentContext:(id)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (void)setDuckOthersOption:(char)a0;
- (void)setMeteringEnabled:(char)a0;
- (char)setRecordMode:(long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (char)startAudioStreamWithOption:(id)a0 recordDeviceIndicator:(id)a1 error:(id *)a2;
- (char)stopAudioStreamWithRecordDeviceIndicator:(id)a0 error:(id *)a1;
- (void)updateMeters;

@end
