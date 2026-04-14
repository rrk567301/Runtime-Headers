@class NSColor;

@interface _NSCollectionViewColorFillView : NSView {
    NSColor *_fillColor;
}

@property (copy) NSColor *fillColor;

- (void)dealloc;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldBeArchived;

@end
