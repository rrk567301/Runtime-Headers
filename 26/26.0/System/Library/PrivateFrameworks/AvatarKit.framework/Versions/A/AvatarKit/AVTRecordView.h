@protocol AVTRecordViewDelegate;

@interface AVTRecordView : AVTView

@property (weak, nonatomic) id<AVTRecordViewDelegate> recordDelegate;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (nonatomic) BOOL mute;
@property (nonatomic) float maxRecordingDuration;

- (void)stopRecording;
- (void)startRecording;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1;
- (void)cancelRecording;
- (void)playPreviewOnce;
- (void)startPreviewing;
- (BOOL)exportMovieToURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopPreviewing;

@end
