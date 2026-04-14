@class NSTimer, IKCacheFragHandler;

@interface IKCacheFragHandlerView : NSView {
    IKCacheFragHandler *_cacheFragHandler;
    NSTimer *_timer;
    unsigned int _rowLength;
    unsigned int _rowHeight;
}

- (void)finalize;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cacheFragHandler;
- (void)_convertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toPosition:(unsigned int *)a1;
- (void)drawFragmentationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPosition:(unsigned int *)a1 andLength:(unsigned long long)a2;
- (void)redisplay;
- (void)stopAutoUpdate;
- (void)setRowLength:(unsigned int)a0;
- (unsigned int)rowLength;
- (void)startAutoUpdate;
- (void)setCacheFragHandler:(id)a0;

@end
