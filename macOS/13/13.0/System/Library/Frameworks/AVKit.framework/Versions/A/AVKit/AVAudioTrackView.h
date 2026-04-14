@class AVObservationController, AVWaveformLayer;

@interface AVAudioTrackView : AVTrackView {
    AVObservationController *_observationController;
    AVWaveformLayer *_waveformLayer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)makeBackingLayer;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewDidEndLiveResize;
- (void)_updateWaveformIfNeeded;
- (void)_setupWaveformLayer;

@end
