@class AVObservationController, AVWaveformLayer;

@interface AVAudioTrackView : AVTrackView {
    AVObservationController *_observationController;
    AVWaveformLayer *_waveformLayer;
}

- (void)layout;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)makeBackingLayer;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)_setupWaveformLayer;
- (void)_updateWaveformIfNeeded;

@end
