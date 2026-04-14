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

- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1 withEventUUID:(id)a2;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1 withEventUUID:(id)a2;
- (void)fetchCurrentStreamingState:(id /* block */)a0;
- (void)notifyFetchedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyReleaseAudioSession;
- (void)notifyPreparedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyAudioDeviceInfoUpdated:(id)a0;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)a0;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void).cxx_destruct;

@end
