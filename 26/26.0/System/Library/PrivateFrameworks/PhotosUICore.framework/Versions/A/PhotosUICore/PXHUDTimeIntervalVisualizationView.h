@class PXHUDTimeIntervalVisualization, UXLabel, NSTimer;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    UXLabel *_titleAndTimeLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) PXHUDTimeIntervalVisualization *visualization;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_cleanupTimer;
- (void).cxx_destruct;
- (void)_setupTimer;
- (void)_updateTimer;
- (void)_timerTick;
- (void)_updateTitleAndTimeLabel;
- (void)visualizationDidUpdate;

@end
