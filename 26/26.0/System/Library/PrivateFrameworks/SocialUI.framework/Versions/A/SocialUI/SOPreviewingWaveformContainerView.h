@class SOPreviewingWaveformView, NSTextField;

@interface SOPreviewingWaveformContainerView : SOAbstractWaveFormView

@property (retain, nonatomic) SOPreviewingWaveformView *waveformView;
@property (retain, nonatomic) NSTextField *timeStamp;

- (void)setTime:(double)a0;
- (void).cxx_destruct;
- (void)setWaveformImage:(id)a0;
- (void)clearWaveform;

@end
