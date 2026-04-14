@class NSURL, NSString, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemonProxy;

- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (oneway void)stopClipBufferingWithCompletionHandler:(id /* block */)a0;
- (oneway void)exportClipToURL:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (oneway void)stream:(id)a0 didStopWithError:(id)a1;
- (oneway void)macApplicationDidResignActive;
- (oneway void)pauseInAppRecording;
- (oneway void)pauseInAppCapture;
- (oneway void)captureHandlerWithSample:(id)a0 timingData:(id)a1;
- (oneway void)captureHandlerWithAudioSample:(id)a0 bufferType:(long long)a1;
- (oneway void)stopInAppBroadcastWithHandler:(id /* block */)a0;
- (oneway void)pauseInAppBroadcast;
- (oneway void)saveVideoToCameraRoll:(id)a0 handler:(id /* block */)a1;
- (oneway void)saveClipToCameraRoll:(id)a0 handler:(id /* block */)a1;
- (oneway void)saveVideo:(id)a0 handler:(id /* block */)a1;
- (oneway void)recordingLockInterrupted:(id)a0;
- (oneway void)recordingTimerDidUpdate:(id)a0;
- (oneway void)recordingDidPause;
- (oneway void)shouldResumeSessionType:(id)a0;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)a0;
- (oneway void)recordingDidStopWithError:(id)a0 movieURL:(id)a1;
- (oneway void)appAudioCaptureStartWithDidStartHandler:(id /* block */)a0;
- (oneway void)appAudioCaptureResumeWithHandler:(id /* block */)a0;
- (oneway void)appAudioCaptureStopWithHandler:(id /* block */)a0;
- (oneway void)startRemoteQueue:(id)a0 streamID:(id)a1;
- (oneway void)stopRemoteQueue:(id)a0 type:(unsigned char)a1;
- (oneway void)updateBroadcastURL:(id)a0;
- (oneway void)updateBroadcastServiceInfo:(id)a0;
- (oneway void)startInAppRecordingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)stopInAppRecordingWithUrl:(id)a0 handler:(id /* block */)a1;
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)discardInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)startInAppCaptureWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopInAppCaptureWithHandler:(id /* block */)a0;
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)startInAppBroadcastWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 listenerEndpoint:(id)a4 withHandler:(id /* block */)a5;
- (oneway void)setupBroadcastWithHostBundleID:(id)a0 broadcastExtensionBundleID:(id)a1 broadcastConfigurationData:(id)a2 userInfo:(id)a3 handler:(id /* block */)a4;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)startClipBufferingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (oneway void)resumeInAppClipWithWindowLayerContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)a0;
- (oneway void)reportCameraUsage:(long long)a0;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)appAudioCaptureOutputHandler:(id)a0;
- (oneway void)consumeSandboxExtension:(id)a0 processNewConnection:(BOOL)a1;
- (oneway void)stopCurrentActiveSessionWithHandler:(id /* block */)a0;
- (oneway void)stopAllActiveClients;
- (oneway void)updateStream:(id)a0 withContentFilter:(id)a1 streamData:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)updateStream:(id)a0 withStreamConfiguration:(id)a1 streamData:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)startCapture:(id)a0 withContentFilter:(id)a1 properties:(id)a2 completionHandler:(id /* block */)a3;
- (oneway void)stop:(id)a0 streamData:(id)a1 withCompletionHandler:(id /* block */)a2;
- (oneway void)fetchShareableContentWithOption:(unsigned int)a0 windowID:(unsigned int)a1 withCompletionHandler:(id /* block */)a2;
- (void)issueSandboxExtensionForMainBundleRead;
- (id)issueSandboxExtensionForClientFileWrite:(id)a0;

@end
