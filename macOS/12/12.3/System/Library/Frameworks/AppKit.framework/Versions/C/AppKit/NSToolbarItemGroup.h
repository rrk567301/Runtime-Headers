@class NSArray, NSString, NSImage;

@interface NSToolbarItemGroup : NSToolbarItem {
    id _groupItems;
    struct { unsigned char dirtiedLayout : 1; unsigned int reserved : 31; } _giFlags;
    long long _controlRepresentation;
    long long _selectionMode;
    NSString *_title;
    NSImage *_image;
    id _target;
    SEL _action;
}

@property (copy) NSArray *subitems;
@property long long controlRepresentation;
@property long long selectionMode;
@property long long selectedIndex;

+ (id)groupWithItemIdentifier:(id)a0 titles:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;
+ (id)groupWithItemIdentifier:(id)a0 images:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (SEL)action;
- (void)setImage:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setTitle:(id)a0;
- (id)view;
- (id)image;
- (id)title;
- (id)initWithItemIdentifier:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)_menuFormRepresentationForOverflowMenu;
- (BOOL)validateMenuItem:(id)a0;
- (void)setBordered:(BOOL)a0;
- (BOOL)_isCustomItemType;
- (id)menuFormRepresentation;
- (void)validate;
- (void)invalidateLayout;
- (void)_forceSetView:(id)a0;
- (void)_setToolbar:(id)a0;
- (id)_allocDefaultView;
- (void)_itemLayoutChanged;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 controlBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_standardCommonSubitemMenuFormRepresentationClicked:(id)a0;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 stretchesContent:(BOOL)a2;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)a0 isInPalette:(BOOL)a1;
- (id)_viewsArray;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)a0 forDisplayMode:(unsigned long long)a1 isInPalette:(BOOL)a2;
- (BOOL)_viewIsEnabledAtIndex:(long long)a0;
- (id)_itemAtLabelIndex:(long long)a0;
- (id)_itemAtViewIndex:(long long)a0;
- (double)_interlabelPadding;
- (void)_setItemViewer:(id)a0;
- (id)_buttonAtIndex:(unsigned long long)a0;
- (id)_initialViewToSelectFromDirection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 controlBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_selectableToolbarViews;
- (id)_defaultGroupViewIfUsed;
- (id)_defaultPickerViewIfUsed;
- (double)_interviewPadding;
- (void)_updateViewRepresentation;
- (BOOL)_subitemsContainCustomViews;
- (void)_performActionForPicker:(id)a0;
- (long long)_safeControlRepresentation;
- (void)setSelected:(BOOL)a0 atIndex:(long long)a1;
- (BOOL)isSelectedAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_segmentedControlRectForItemAtIndex:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 controlBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelOnlyModeRectForItemAtIndex:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_evenlySpacedRectForItemAtIndex:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_allowsDefaultMenuFormRepresentation;
- (id)_menuFormRepresentationForOverflowMenuOfSubitem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_segmentedControlRectForItemAtIndex:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
