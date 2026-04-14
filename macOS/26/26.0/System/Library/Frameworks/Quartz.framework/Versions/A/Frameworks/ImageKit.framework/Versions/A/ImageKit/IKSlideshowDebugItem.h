@interface IKSlideshowDebugItem : NSView

@property unsigned long long index;
@property unsigned long long flags;
@property BOOL imageLoaded;
@property BOOL thumbnailLoaded;
@property BOOL current;
@property (nonatomic) BOOL dataSourceItemIsCached;

- (void)finalize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cleanup;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)invalidate;
- (void)setAutoPlaying:(BOOL)a0;
- (BOOL)autoPlaying;
- (id)initWithIndex:(unsigned long long)a0 slideshow:(id)a1 col:(int)a2 row:(int)a3;
- (void)setdataSourceItemIsCached:(BOOL)a0;
- (void)unbindAll;

@end
