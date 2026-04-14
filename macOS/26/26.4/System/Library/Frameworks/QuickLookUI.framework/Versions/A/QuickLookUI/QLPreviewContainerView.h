@class QLPreviewView;

@interface QLPreviewContainerView : NSView

@property (weak) QLPreviewView *previewView;
@property BOOL updatePreviewSize;

- (id)accessibilityValue;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (unsigned int)_CAViewFlags;
- (BOOL)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x0; double x1; })a0;

@end
