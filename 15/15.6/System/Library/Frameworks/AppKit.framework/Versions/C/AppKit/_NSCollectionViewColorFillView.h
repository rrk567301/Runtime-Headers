@class NSColor;

@interface _NSCollectionViewColorFillView : NSView {
    NSColor *_fillColor;
}

@property (copy) NSColor *fillColor;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)shouldBeArchived;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
