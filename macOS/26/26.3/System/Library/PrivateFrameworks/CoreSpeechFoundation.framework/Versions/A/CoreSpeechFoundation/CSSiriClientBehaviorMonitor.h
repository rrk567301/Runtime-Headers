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

- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)a0;
- (id)init;
- (void)notifyFetchedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyAudioDeviceInfoUpdated:(id)a0;
- (void)notifyReleaseAudioSession;
- (void)fetchCurrentStreamingState:(id /* block */)a0;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1 withEventUUID:(id)a2;
- (void)registerObserver:(id)a0;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1 withEventUUID:(id)a2;
- (void)notifyPreparedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;

@end
