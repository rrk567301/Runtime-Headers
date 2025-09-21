@interface IKSlideshowDebugItem : NSView

@property unsigned long long index;
@property unsigned long long flags;
@property char imageLoaded;
@property char thumbnailLoaded;
@property char current;
@property (nonatomic) char dataSourceItemIsCached;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)invalidate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)setAutoPlaying:(char)a0;
- (char)autoPlaying;
- (id)initWithIndex:(unsigned long long)a0 slideshow:(id)a1 col:(int)a2 row:(int)a3;
- (void)setdataSourceItemIsCached:(char)a0;
- (void)unbindAll;

@end
