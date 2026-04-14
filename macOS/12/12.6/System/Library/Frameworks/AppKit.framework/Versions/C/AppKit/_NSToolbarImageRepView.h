@class NSArray, NSImageRep;

@interface _NSToolbarImageRepView : NSView {
    NSArray *_itemIdentifiers;
    NSImageRep *_activeImageRep;
    NSImageRep *_inactiveImageRep;
    struct CGSize { double width; double height; } logicalImageSize;
}

@property (nonatomic) struct CGSize { double x0; double x1; } logicalImageSize;

- (void)dealloc;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)_windowChangedKeyState;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (id)menuForEvent:(id)a0;
- (id)_itemIdentifiers;
- (id)_computeDragImage;
- (BOOL)_isPaletteView;
- (void)setActiveImageRep:(id)a0 inactiveImageRep:(id)a1 forItemIdentifiers:(id)a2;
- (void)sizeWidthToFit;
- (void)sizeHeightToFit;
- (struct CGSize { double x0; double x1; })sizeWhenSizedToFit;
- (id)_validDestinationForDragsWeInitiate;
- (id)_activeImageRep;
- (id)_inactiveImageRep;

@end
