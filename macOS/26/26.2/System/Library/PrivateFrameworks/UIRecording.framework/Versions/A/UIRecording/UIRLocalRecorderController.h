@class UIRLocalRecorder;

@interface UIRLocalRecorderController : NSObject {
    UIRLocalRecorder *_recorder;
}

- (id)recorder;
- (void)startRecording;
- (void)setRecorder:(id)a0;
- (void)dealloc;
- (void)stopRecording:(id)a0;
- (void)startRecordingEvents:(unsigned long long)a0 forPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a1;
- (void)uirLocalRecorder:(id)a0 didStopRecording:(id)a1;

@end
