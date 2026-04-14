@class NSMapTable;

@interface KHTwoPageCanvasLayout : KHCanvasLayout

@property (retain, nonatomic) NSMapTable *sizeConstraintsByLayout;

- (void)setLayouts:(id)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setScale:(double)a0;
- (void)cleanupConstraints;
- (id)constraintsForCanvasView:(id)a0;
- (id)initWithLayouts:(id)a0;

@end
