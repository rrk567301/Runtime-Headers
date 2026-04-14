@class NSMapTable;

@interface KHTwoPageCanvasLayout : KHCanvasLayout

@property (retain, nonatomic) NSMapTable *sizeConstraintsByLayout;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setScale:(double)a0;
- (void)setLayouts:(id)a0;
- (void)cleanupConstraints;
- (id)initWithLayouts:(id)a0;
- (id)constraintsForCanvasView:(id)a0;

@end
