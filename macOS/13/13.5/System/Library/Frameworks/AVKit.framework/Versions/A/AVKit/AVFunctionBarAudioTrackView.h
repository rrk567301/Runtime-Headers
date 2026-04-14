@class NSColor, NSArray;

@interface AVFunctionBarAudioTrackView : AVFunctionBarTrackView {
    double _normalizedCurrentValue;
    NSColor *_waveformColor;
    NSArray *_amplitudeSamples;
    float _maximumAmplitudeSample;
}

@property (class, readonly) NSColor *defaultWaveformColor;

@property (retain) NSColor *waveformColor;
@property (retain) NSArray *amplitudeSamples;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_showsWaveform;
- (void)_updateWaveformColor;
- (double)normalizedCurrentValue;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })previewLayerSize;
- (void)setNormalizedCurrentValue:(double)a0;
- (void)updatePreviewLayerContent;

@end
