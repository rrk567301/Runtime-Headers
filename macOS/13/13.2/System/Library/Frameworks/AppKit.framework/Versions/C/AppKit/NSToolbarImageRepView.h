@class NSArray, NSView, NSBitmapImageRep, NSString, NSImageRep;

@interface NSToolbarImageRepView : NSView <NSDraggingSource> {
    NSArray *_itemIdentifiers;
    NSImageRep *_activeImageRep;
    NSImageRep *_inactiveImageRep;
}

@property (weak) NSView *validViewDestination;
@property (readonly) NSBitmapImageRep *_activeImageRep;
@property (readonly) NSBitmapImageRep *_inactiveImageRep;
@property (readonly, copy) NSArray *_itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
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
- (void)_windowChangedKeyState;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (id)menuForEvent:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (BOOL)_isPaletteView;
- (id)_validDestinationForDragsWeInitiate;
- (void)setActiveImageRep:(id)a0 inactiveImageRep:(id)a1 forItemIdentifiers:(id)a2;
- (id)_computeDragImage;

@end
