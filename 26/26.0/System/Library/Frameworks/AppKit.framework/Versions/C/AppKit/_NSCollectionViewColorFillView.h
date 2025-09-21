@class NSColor;

@interface _NSCollectionViewColorFillView : NSView {
    NSColor *_fillColor;
}

@property (copy) NSColor *fillColor;

- (void)updateLayer;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldBeArchived;
- (BOOL)wantsUpdateLayer;

@end
