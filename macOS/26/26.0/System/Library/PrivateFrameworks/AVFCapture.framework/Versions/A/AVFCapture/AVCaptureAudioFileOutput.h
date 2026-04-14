@class NSArray, NSDictionary, AVCaptureAudioFileOutputInternal;

@interface AVCaptureAudioFileOutput : AVCaptureFileOutput {
    AVCaptureAudioFileOutputInternal *_internal;
}

@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSDictionary *audioSettings;

+ (long long)uniqueID;
+ (id)new;
+ (void)initialize;
+ (id)availableOutputFileTypes;

- (void)stopRecording;
- (BOOL)isRecording;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)resumeRecording;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)init;
- (void)pauseRecording;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (int)_stopRecording;
- (void)startRecordingToOutputFileURL:(id)a0 outputFileType:(id)a1 recordingDelegate:(id)a2;
- (id)_avErrorUserInfoDictionaryForError:(int)a0 wrapper:(id)a1 payload:(id)a2;
- (BOOL)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)a0;
- (void)_startRecording:(id)a0;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStartRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidStopRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (BOOL)isRecordingPaused;
- (id)outputFileURL;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;

@end
