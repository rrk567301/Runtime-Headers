@interface APRKStreamRecorder : NSObject {
    struct OpaqueFigAssetWriter { } *_assetWriter;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recordingStartTime;
    int _audioTrackID;
    int _videoTrackID;
}

- (BOOL)finalizeRecording;
- (int)startRecordingAtURL:(id)a0;
- (int)recordVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)recordAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_recordSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toTrackWithID:(int)a1;

@end
