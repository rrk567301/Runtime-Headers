@protocol AVTRecordViewDelegate;

@interface AVTRecordView : AVTView

@property (weak, nonatomic) id<AVTRecordViewDelegate> recordDelegate;
@property (readonly, nonatomic, getter=isRecording) char recording;
@property (readonly, nonatomic, getter=isPreviewing) char previewing;
@property (nonatomic) char mute;
@property (nonatomic) float maxRecordingDuration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1;
- (void)startRecording;
- (void)stopRecording;
- (void)cancelRecording;
- (void)playPreviewOnce;
- (void)startPreviewing;
- (char)exportMovieToURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopPreviewing;

@end
