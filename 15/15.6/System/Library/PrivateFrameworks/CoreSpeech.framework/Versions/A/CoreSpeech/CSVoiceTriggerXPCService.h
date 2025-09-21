@class CSVoiceTriggerXPCClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSVoiceTriggerXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (id)_createXPCClientConnectionIfNeeded:(id)a0;
- (void)_teardownXPCClientIfNeeded;
- (void)enableVoiceTrigger:(char)a0 withAssertion:(id)a1;
- (void)enableVoiceTrigger:(char)a0 withAssertion:(id)a1 xpcClient:(id)a2;
- (id)fetchVoiceTriggerDailyStats;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)a0;
- (void)setPhraseSpotterBypassing:(char)a0 timeout:(double)a1;
- (void)setPhraseSpotterBypassing:(char)a0 timeout:(double)a1 xpcClient:(id)a2;
- (void)setRaiseToSpeakBypassing:(char)a0 timeout:(double)a1;
- (void)setRaiseToSpeakBypassing:(char)a0 timeout:(double)a1 xpcClient:(id)a2;
- (void)voiceTriggerXPCClient:(id)a0 didDisconnect:(char)a1;

@end
