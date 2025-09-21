@class NSString, NSFormatter;

@interface QTHUDRemoteIndicatorView : NSView {
    struct QTHUDRemoteIndicatorViewInternal { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; double x9; double x10; double x11; double x12; unsigned long long x13; double x14[3]; } *_internal;
}

@property (getter=_trackMagnitude, setter=_setTrackMagnitude:) double trackMagnitude;
@property (copy) NSString *chapterName;
@property (copy) NSFormatter *timeFormatter;
@property double duration;
@property double time;
@property double rate;
@property (readonly) double updateInterval;

+ (void)initialize;
+ (id)_imageNamed:(id)a0;
+ (id)keyPathsForValuesAffectingUpdateInterval;

- (void)dealloc;
- (double)duration;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setDuration:(double)a0;
- (void)setTime:(double)a0;
- (double)time;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (double)rate;
- (void)setRate:(double)a0;
- (Class)valueClassForBinding:(id)a0;
- (id)timeFormatter;
- (void)setChapterName:(id)a0;
- (id)chapterName;
- (void)setRateThresholds:(const double *)a0 count:(unsigned long long)a1;
- (void)setTimeFormatter:(id)a0;

@end
