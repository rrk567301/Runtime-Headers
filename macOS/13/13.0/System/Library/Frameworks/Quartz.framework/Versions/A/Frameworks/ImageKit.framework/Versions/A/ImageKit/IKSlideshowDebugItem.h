@interface IKSlideshowDebugItem : NSView

@property unsigned long long index;
@property unsigned long long flags;
@property BOOL imageLoaded;
@property BOOL thumbnailLoaded;
@property BOOL current;
@property (nonatomic) BOOL dataSourceItemIsCached;

- (void)dealloc;
- (void)finalize;
- (void)invalidate;
- (void)cleanup;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)unbindAll;
- (BOOL)autoPlaying;
- (void)setAutoPlaying:(BOOL)a0;
- (id)initWithIndex:(unsigned long long)a0 slideshow:(id)a1 col:(int)a2 row:(int)a3;
- (void)setdataSourceItemIsCached:(BOOL)a0;

@end
