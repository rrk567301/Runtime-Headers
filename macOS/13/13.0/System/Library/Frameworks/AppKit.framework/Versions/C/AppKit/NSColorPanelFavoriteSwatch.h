@class NSString;

@interface NSColorPanelFavoriteSwatch : NSCollectionViewItem <_NSItemFocusingCollectionViewItem> {
    struct CGPoint { double x; double y; } _mouseDownLocation;
}

@property (weak) id target;
@property SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)performClick:(id)a0;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)setSelected:(BOOL)a0;
- (void)refreshCollectionViewFocusState;

@end
