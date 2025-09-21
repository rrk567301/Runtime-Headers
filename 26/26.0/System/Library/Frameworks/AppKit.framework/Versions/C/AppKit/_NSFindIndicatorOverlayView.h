@class _NSTextFinderImpl, NSArray;

@interface _NSFindIndicatorOverlayView : NSView {
    _NSTextFinderImpl *_textFinderImpl;
    NSArray *_holes;
    BOOL _flipped;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isFlipped;
- (id)initWithTextFinderImpl:(id)a0 flipped:(BOOL)a1;
- (id)_holes;
- (void)_updateHoles;

@end
