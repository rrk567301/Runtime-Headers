@class QLPreviewView;

@interface QLPreviewContainerView : NSView

@property (weak) QLPreviewView *previewView;
@property BOOL updatePreviewSize;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (unsigned int)_CAViewFlags;
- (BOOL)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x0; double x1; })a0;

@end
