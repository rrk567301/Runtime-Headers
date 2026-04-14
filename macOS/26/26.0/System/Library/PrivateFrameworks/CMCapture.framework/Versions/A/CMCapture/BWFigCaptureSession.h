@class NSString, FigCaptureSessionPipelines;

@interface BWFigCaptureSession : NSObject <BWPipelineNotificationDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWNodeFileCoordinatorStatusDelegate, BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWIrisStagingNodeIrisRequestDelegate, BWPreviewStitcherDelegate, BWVideoPIPOverlayDelegate, FigCaptureDisplayLayoutObserver, BWGraphStatusDelegate, FigCaptureInterruptionDelegate> {
    struct OpaqueFigCaptureSession { } *_captureSession;
    FigCaptureSessionPipelines *_pipelines;
    long long _graphID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postNotification:(id)a0 notificationPayload:(id)a1;
- (void)imageQueueSinkNode:(id)a0 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 withSuccess:(BOOL)a2;
- (void)node:(id)a0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 forInput:(id)a2;
- (void)fileCoordinator:(id)a0 sentMarkerBufferForFileWriterAction:(id)a1 withPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 settings:(id)a3 errorCode:(int)a4;
- (void)remoteQueueSinkNode:(id)a0 localQueueBecameReady:(struct localQueueOpaque { } *)a1;
- (void)stagingNode:(id)a0 valveClosedWithPendingIrisRequests:(id)a1;
- (void)dealloc;
- (void)stillImageCoordinator:(id)a0 didCancelMomentCaptureForSettingsID:(long long)a1 streamingDisruptionEndPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)remoteQueueSinkNode:(id)a0 dumpStateForReason:(id)a1;
- (void)remoteQueueSinkNodeDidDeliverFirstVideoFrame:(id)a0;
- (void)stillImageCoordinator:(id)a0 didCapturePhotoForSettings:(id)a1;
- (void)stagingNode:(id)a0 willEmitIrisRequest:(id)a1;
- (void)previewStitcherTrueVideoExitTransitionDidComplete:(id)a0;
- (void)videoPIPOverlayNode:(id)a0 overlayRectDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)interruptionTriggered:(id)a0;
- (void)stagingNode:(id)a0 waitingToEmitFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)interruptionResolved:(id)a0;
- (void)node:(id)a0 format:(id)a1 didBecomeLiveForInput:(id)a2 configurationID:(long long)a3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0 timedOut:(BOOL)a1;
- (void)fileWriter:(id)a0 writerPipelineIndex:(unsigned long long)a1 stoppedRecordingForSettings:(id)a2 withError:(int)a3 thumbnailSurface:(struct __IOSurface { } *)a4 irisMovieInfo:(id)a5 debugMetadataSidecarFileURL:(id)a6 recordingSucceeded:(BOOL)a7;
- (void)remoteQueueSinkNode:(id)a0 queueBecameReady:(struct remoteQueueSenderOpaque { } *)a1;
- (void)fileWriter:(id)a0 pausedRecordingForSettingsID:(unsigned long long)a1;
- (void)previewStitcher:(id)a0 overCaptureStatusDidChange:(int)a1;
- (void)stagingNode:(id)a0 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stillImageCoordinator:(id)a0 willCapturePhotoForSettings:(id)a1 error:(int)a2;
- (void)stillImageCoordinator:(id)a0 didSelectNewReferenceFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 transform:(id)a2 forSettings:(id)a3;
- (void)graphDidResolveRetainedBufferCounts:(id)a0;
- (void)stillImageCoordinator:(id)a0 willPrepareStillImageCaptureWithSettings:(id)a1 clientInitiated:(BOOL)a2;
- (void)stillImageCoordinator:(id)a0 readyToRespondToRequestAfterRequestWithSettings:(id)a1;
- (void)stillImageCoordinator:(id)a0 updateSettingsAfterLiveReconfiguration:(id)a1;
- (void)graph:(id)a0 didFinishStartingWithError:(int)a1;
- (void)previewStitcherSmartFramingFieldOfViewTransitionAppliedZoomFactor:(id)a0 zoomFactor:(double)a1;
- (void)previewStitcherReadyForPrimaryCaptureRectUpdates:(id)a0;
- (void)previewStitcher:(id)a0 didApplyWiderCameraShift:(struct CGPoint { double x0; double x1; })a1 widerCameraScaleFactor:(float)a2 forWiderCameraPortType:(id)a3 narrowerCameraShift:(struct CGPoint { double x0; double x1; })a4 narrowerCameraScaleFactor:(float)a5 forNarrowerCameraPortType:(id)a6 inSuperWideMacroMode:(BOOL)a7 widerCameraShiftAtBaseZoom:(struct CGPoint { double x0; double x1; })a8;
- (void)stillImageCoordinator:(id)a0 willBeginCaptureForSettings:(id)a1;
- (void)fileWriter:(id)a0 writerPipelineIndex:(unsigned long long)a1 stoppedRecordingSampleDataForSettingsID:(long long)a2;
- (void)fileCoordinator:(id)a0 stoppedBeforeStartedRecordingForSettings:(id)a1 pendingIrisMovieInfos:(id)a2 errorCode:(int)a3;
- (float)trueVideoCaptureAdditionalZoomFactorForPreviewStitcher:(id)a0;
- (void)stillImageCoordinator:(id)a0 didResolveStillImagePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forSettings:(id)a2 isPreBracketedEV0:(BOOL)a3;
- (void)layoutMonitor:(id)a0 didUpdateLayout:(id)a1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0 atHostTime:(long long)a1;
- (void)graph:(id)a0 didStartSourceNode:(id)a1 error:(int)a2;
- (void)node:(id)a0 format:(id)a1 didBecomeLiveForOutput:(id)a2;
- (void)graphDidPrepareNodes:(id)a0;
- (void)fileWriter:(id)a0 frameDroppedForSettingsID:(unsigned long long)a1 withError:(int)a2;
- (void)fileWriter:(id)a0 resumedRecordingForSettingsID:(unsigned long long)a1;
- (void)stillImageCoordinator:(id)a0 willBeginCaptureBeforeResolvingSettingsForID:(long long)a1;
- (void)fileWriter:(id)a0 startedRecordingForSettings:(id)a1 writerPipelineIndex:(unsigned long long)a2 startPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
