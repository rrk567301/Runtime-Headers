@class NSString, NSHashTable, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

@property (copy) CSAudioRecordContext *audioRecordContext;
@property (copy) NSString *recordRoute;
@property (copy) NSString *deviceId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isStreaming;

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1 withEventUUID:(id)a2;
- (void)notifyAudioDeviceInfoUpdated:(id)a0;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)a0;
- (void)fetchCurrentStreamingState:(id /* block */)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void)notifyFetchedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyPreparedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (id)init;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1 withEventUUID:(id)a2;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)notifyReleaseAudioSession;

@end
