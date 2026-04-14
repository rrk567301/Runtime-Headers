@class GEOComposedRouteAdvisoryItem;
@protocol MKIncidentDetailDelegate;

@interface MKIncidentDetailContentView : NSView {
    GEOComposedRouteAdvisoryItem *_advisoryItem;
}

@property (weak, nonatomic) id<MKIncidentDetailDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithAdvisoryItem:(id)a0;

@end
