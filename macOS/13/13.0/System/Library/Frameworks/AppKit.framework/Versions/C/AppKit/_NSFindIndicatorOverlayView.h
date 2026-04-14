@class _NSTextFinderImpl, NSArray;

@interface _NSFindIndicatorOverlayView : NSView {
    _NSTextFinderImpl *_textFinderImpl;
    NSArray *_holes;
    BOOL _flipped;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithTextFinderImpl:(id)a0 flipped:(BOOL)a1;
- (void)_updateHoles;
- (id)_holes;

@end
