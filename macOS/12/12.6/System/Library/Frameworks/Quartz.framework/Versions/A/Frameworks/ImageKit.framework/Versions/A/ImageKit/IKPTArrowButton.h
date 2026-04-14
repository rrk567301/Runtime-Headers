@class NSString, NSMutableDictionary;

@interface IKPTArrowButton : NSButton {
    long long _direction;
    NSMutableDictionary *_attr;
    long long _trackingRectTag;
    BOOL _active;
    BOOL _displayCapsule;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
    NSString *_string;
}

@property (nonatomic) long long direction;
@property (nonatomic) long long index;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseUp:(id)a0;
- (void)drawHoverTarget;
- (void)drawCapsule;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverRectForDirection;
- (void)updateTrackingRect;
- (BOOL)checkPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleRectForDirection;
- (id)leftArrowPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)rightArrowPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)capsulePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForString;
- (void)setIndex:(unsigned long long)a0 count:(unsigned long long)a1;

@end
