@class NSString, NSObject, AFConnection;
@protocol OS_dispatch_queue;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 targetQueue:(id)a1;
- (oneway void)requestDidReceiveCommand:(id)a0 reply:(id /* block */)a1;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)a0;
- (oneway void)setUserActivityInfo:(id)a0 webpageURL:(id)a1;
- (oneway void)speechRecordingDidEndWithReply:(id /* block */)a0;
- (id)_connectionDelegate;
- (oneway void)aceConnectionWillRetryOnError:(id)a0;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(char)a0;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)appLaunchFailedWithBundleIdentifier:(id)a0;
- (oneway void)audioPlaybackRequestDidStart:(id)a0;
- (oneway void)audioPlaybackRequestDidStop:(id)a0 error:(id)a1;
- (oneway void)audioPlaybackRequestWillStart:(id)a0;
- (oneway void)audioSessionDidBecomeActive:(char)a0;
- (oneway void)audioSessionDidBeginInterruptionWithUserInfo:(id)a0;
- (oneway void)audioSessionDidEndInterruption:(char)a0 userInfo:(id)a1;
- (oneway void)audioSessionWillBecomeActive:(char)a0;
- (oneway void)cacheImage:(id)a0;
- (oneway void)extensionRequestFinishedForApplication:(id)a0 error:(id)a1;
- (oneway void)extensionRequestWillStartForApplication:(id)a0;
- (oneway void)getBulletinContext:(id /* block */)a0;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)networkDidBecomeActive;
- (oneway void)requestDidAskForTimeoutExtension:(double)a0;
- (oneway void)requestDidUpdateResponseMode:(id)a0;
- (oneway void)requestHandleCommand:(id)a0 reply:(id /* block */)a1;
- (oneway void)requestReplayAllRecordedViews:(unsigned long long)a0 with:(id)a1;
- (oneway void)requestReplayRecordedViewAt:(unsigned long long)a0 with:(id)a1;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedDismissAssistantWithReason:(long long)a0;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)a0 URL:(id)a1 reply:(id /* block */)a2;
- (oneway void)requestRequestedOpenURL:(id)a0 reply:(id /* block */)a1;
- (oneway void)requestSetReplayEnabled:(char)a0;
- (oneway void)requestSetReplayOverridePath:(id)a0;
- (oneway void)shouldSpeakChanged:(char)a0;
- (oneway void)speechRecognitionDidFail:(id)a0;
- (oneway void)speechRecognized:(id)a0;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)a0 refId:(id)a1;
- (oneway void)speechRecognizedPartialResult:(id)a0;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRecordingDidCancelWithReply:(id /* block */)a0;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)a0 isDucking:(char)a1 isTwoShot:(char)a2 speechEndHostTime:(unsigned long long)a3 reply:(id /* block */)a4;
- (oneway void)speechRecordingDidFail:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)a0 utterances:(id)a1 refId:(id)a2;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)a0 reply:(id /* block */)a1;
- (oneway void)speechRecordingStartpointDetectedWithReply:(id /* block */)a0;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)a0;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)a0 reply:(id /* block */)a1;
- (oneway void)startPlaybackDidFail:(long long)a0;
- (oneway void)startUIRequestWithInfo:(id)a0 completion:(id /* block */)a1;
- (oneway void)startUIRequestWithText:(id)a0 completion:(id /* block */)a1;
- (oneway void)willProcessAppLaunchWithBundleIdentifier:(id)a0;
- (oneway void)willProcessStartPlayback:(long long)a0 intent:(id)a1 completion:(id /* block */)a2;
- (oneway void)willStopRecordingWithSignpostID:(unsigned long long)a0;

@end
