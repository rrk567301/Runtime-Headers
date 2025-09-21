@class AXVHighlightPointView;

@interface SCRVisualsEncircledPoint : NSObject

@property (retain, nonatomic, setter=_setPointView:) AXVHighlightPointView *_pointView;
@property (nonatomic) char encircledPointEnabled;
@property (nonatomic) struct CGPoint { double x; double y; } highlightPoint;

- (id)init;
- (void).cxx_destruct;

@end
