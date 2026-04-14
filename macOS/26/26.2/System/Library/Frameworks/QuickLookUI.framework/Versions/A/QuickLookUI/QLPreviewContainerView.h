@class QLPreviewView;

@interface QLPreviewContainerView : NSView

@property (weak) QLPreviewView *previewView;
@property BOOL updatePreviewSize;

- (id)accessibilityLabel;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (unsigned int)_CAViewFlags;
- (BOOL)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x0; double x1; })a0;

@end
