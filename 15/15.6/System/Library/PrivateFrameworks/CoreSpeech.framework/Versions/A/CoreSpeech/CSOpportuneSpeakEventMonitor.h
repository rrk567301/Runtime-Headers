@class NSString, NSUUID, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char isOpportuneSpeakListening;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (retain, nonatomic) NSUUID *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_notifyStopOpportuneSpeakWithDelay:(double)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)isStreaming;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 audioProviderUUID:(id)a2 successfully:(char)a3 option:(id)a4;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 didStopStream:(id)a1;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 audioProviderUUID:(id)a2 option:(id)a3;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 willStopStream:(id)a1;

@end
