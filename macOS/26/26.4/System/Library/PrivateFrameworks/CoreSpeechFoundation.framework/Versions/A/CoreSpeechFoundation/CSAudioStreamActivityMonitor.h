@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioStreamActivityMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *nonVoiceTriggerStreamsActiveProviderUUIDs;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasNonVoiceTriggerStreamsOrStreamHoldersActive;
- (id)nonVoiceTriggerStreamsActiveAudioProviderUUIDs;
- (BOOL)_hasNonVoiceTriggerStreamsOrStreamHoldersActive;
- (id)_nonVoiceTriggerStreamAudioProviderUUIDs;
- (void)notifyActiveStreamsChanged:(id)a0 streamHolders:(id)a1 streamId:(unsigned long long)a2 audioProviderUUID:(id)a3;

@end
