@class QLPreviewView;

@interface QLPreviewContainerView : NSView

@property (weak) QLPreviewView *previewView;
@property char updatePreviewSize;

- (void).cxx_destruct;
- (unsigned int)_CAViewFlags;
- (char)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (char)isAccessibilityElement;
- (char)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x0; double x1; })a0;

@end
