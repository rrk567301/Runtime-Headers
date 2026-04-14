@class NSString, CALayer, NSLock;

@interface ZMWView : NSObject <NSCopying, CALayerDelegate> {
    CALayer *_rootLayer;
    unsigned int _cgsID;
    struct CGPoint { double x; double y; } _anchorPoint;
    NSLock *_lock;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) double shadowOpacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })position;
- (struct CGSize { double x0; double x1; })_size;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOpacity:(double)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rootLayer;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (double)opacity;
- (void)refresh;
- (void)refreshContent;
- (void)handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)handleMouseMoveToScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleMouseUpAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleMouseDragToScreenPoint:(struct CGPoint { double x0; double x1; })a0 withDifference:(struct CGPoint { double x0; double x1; })a1;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 animationDuration:(double)a1;
- (Class)_rootLayerClass;
- (void)_centerAndFillLayer:(id)a0;
- (void)refreshPosition;

@end
