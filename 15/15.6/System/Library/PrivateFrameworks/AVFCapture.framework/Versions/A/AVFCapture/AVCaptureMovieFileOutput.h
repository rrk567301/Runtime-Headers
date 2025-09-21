@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (readonly, nonatomic, getter=isTrueVideoCaptureSupported) char trueVideoCaptureSupported;
@property (nonatomic, getter=isTrueVideoCaptureEnabled) char trueVideoCaptureEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic, getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled) char primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
@property (readonly, nonatomic) long long primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (readonly, nonatomic) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;
@property (readonly, nonatomic, getter=isSpatialVideoCaptureSupported) char spatialVideoCaptureSupported;
@property (nonatomic, getter=isSpatialVideoCaptureEnabled) char spatialVideoCaptureEnabled;

+ (id)new;
+ (void)initialize;
+ (long long)uniqueID;
+ (char)consolidateMovieFragmentsInFile:(id)a0 error:(id *)a1;
+ (char)updateMovieMetadataInFile:(id)a0 withMetadata:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)init;
- (void)removeConnection:(id)a0;
- (char)isRecording;
- (void)stopRecording;
- (int)_stopRecording;
- (char)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)resumeRecording;
- (id)_avErrorUserInfoDictionaryForError:(int)a0 wrapper:(id)a1 payload:(id)a2;
- (void)_cleanupDelegateWrappers:(id)a0;
- (void)_cleanupDelegateWrappersPendingDidStopRecordingUnregistration;
- (void)_propagateBravoSwitchingBehaviorWhenRecording;
- (char)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)a0;
- (void)_startRecording:(id)a0;
- (char)_totalNANDBandwidthAllowed:(id)a0 videoCodecType:(id)a1;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)a0;
- (void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)a0;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)a0;
- (void)_updateSpatialVideoCaptureSupportedForSourceDevice:(id)a0;
- (void)_updateSupportedPropertiesForSourceDevice:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)bravoCameraSelectionBehaviorForRecording;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)handleDidDropFrameWhileRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStartRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)a0 withPayload:(id)a1 demoof:(char)a2 addMetadata:(char)a3;
- (void)handleDidStopRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1 demoof:(char)a2 addMetadata:(char)a3;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)handleVideoStabilizationModeChangedForConnection:(id)a0;
- (char)isDepthCaptureEnabled;
- (char)isRecordingPaused;
- (char)isStereoVideoCaptureEnabled;
- (char)isStereoVideoCaptureSupported;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (void)pauseRecording;
- (char)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)a0;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (char)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)a0;
- (void)setConnectionsActive:(char)a0;
- (void)setDepthCaptureEnabled:(char)a0;
- (void)setOutputSettings:(id)a0 forConnection:(id)a1;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecording:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (void)setRecordsVideoOrientationAndMirroringChanges:(char)a0 asMetadataTrackForConnection:(id)a1;
- (void)setSendsLastVideoPreviewFrame:(char)a0;
- (void)setStereoVideoCaptureEnabled:(char)a0;
- (void)startRecordingMovieWithSettings:(id)a0 delegate:(id)a1;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (id)supportedOutputSettingsKeysForConnection:(id)a0;

@end
