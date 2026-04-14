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

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })position;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setOpacity:(double)a0;
- (double)opacity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)refresh;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_size;
- (id)rootLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)dealloc;
- (void)handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (Class)_rootLayerClass;
- (void)refreshPosition;
- (void)_centerAndFillLayer:(id)a0;
- (void)handleMouseDragToScreenPoint:(struct CGPoint { double x0; double x1; })a0 withDifference:(struct CGPoint { double x0; double x1; })a1;
- (void)handleMouseMoveToScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleMouseUpAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)refreshContent;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 animationDuration:(double)a1;

@end
