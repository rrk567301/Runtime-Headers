@class _MPCAudioSpectrumAnalyzerStorage, MPCPlaybackEngine, NSMutableArray;

@interface MPCAudioSpectrumAnalyzer : NSObject {
    struct opaqueMTAudioProcessingTap { } *_audioProcessingTap;
}

@property (retain, nonatomic) _MPCAudioSpectrumAnalyzerStorage *storage;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)configurePlayerItem:(id)a0;
- (void)_createAudioTap;
- (void)_destroyAudioTap;
- (BOOL)_shouldAttachAudioTap;
- (void)_analyzeSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(long long)a1;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap { } *)a0 maxFrames:(long long)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;

@end
