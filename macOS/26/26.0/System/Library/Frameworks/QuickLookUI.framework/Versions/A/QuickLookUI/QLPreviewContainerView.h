@class QLPreviewView;

@interface QLPreviewContainerView : NSView

@property (weak) QLPreviewView *previewView;
@property BOOL updatePreviewSize;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned int)_CAViewFlags;
- (BOOL)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize { double x0; double x1; })a0;

@end
