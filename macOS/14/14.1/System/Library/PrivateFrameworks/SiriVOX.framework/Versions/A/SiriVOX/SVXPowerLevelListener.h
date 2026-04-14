@class SiriTTSDaemonSession, NSString, AFAudioPowerUpdater, NSObject;
@protocol OS_dispatch_queue;

@interface SVXPowerLevelListener : NSObject <AFAudioPowerProviding> {
    AFAudioPowerUpdater *_outputAudioPowerUpdater;
    NSObject<OS_dispatch_queue> *_outputAudioPowerUpdaterQueue;
    SiriTTSDaemonSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)_frequency;
- (void)endListening;
- (void)didEndAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)willBeginAccessPower;
- (void)beginListeningToTTSSession:(id)a0 completion:(id /* block */)a1;

@end
