@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface LBAudibleExperienceClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;

- (void).cxx_destruct;
- (id)init;
- (void)informAudioSessionEvent:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupAudioSessionForMediaControlWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupAudioSessionForPhoneCallWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupAudioSessionForRecordingWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleDidCompleteMediaControlEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleDidCompletePhoneCallEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleDidCompleteRecordingEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleMediaControlEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handlePhoneCallEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleRecordingEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleWillStartMediaControlEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleWillStartPhoneCallEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleWillStartRecordingEvent:(id)a0 completion:(id /* block */)a1;
- (void)_prepareAudioSessionForMediaControlWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)_prepareAudioSessionForPhoneCallWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)_prepareAudioSessionForRecordingWithEvent:(id)a0 completion:(id /* block */)a1;

@end
