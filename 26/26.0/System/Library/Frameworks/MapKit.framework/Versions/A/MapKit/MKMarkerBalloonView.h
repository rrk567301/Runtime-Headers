@class MKMarkerContentView;

@interface MKMarkerBalloonView : MKMarkerView

@property (readonly, nonatomic) MKMarkerContentView *contentView;

- (void).cxx_destruct;
- (void)_setupContentViewWithMarkerStyle:(id)a0;
- (id)initWithMarkerStyle:(id)a0;
- (void)updateWithMarkerStyle:(id)a0;

@end
