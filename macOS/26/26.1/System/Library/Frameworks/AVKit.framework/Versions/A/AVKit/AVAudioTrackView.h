@class AVObservationController, AVWaveformLayer;

@interface AVAudioTrackView : AVTrackView {
    AVObservationController *_observationController;
    AVWaveformLayer *_waveformLayer;
}

- (void)layout;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)makeBackingLayer;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)_setupWaveformLayer;
- (void)_updateWaveformIfNeeded;

@end
