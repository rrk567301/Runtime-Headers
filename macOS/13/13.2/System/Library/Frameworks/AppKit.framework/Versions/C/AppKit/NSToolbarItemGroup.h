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

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)target;
- (void)setTarget:(id)a0;
- (id)view;
- (void)setImage:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setTitle:(id)a0;
- (SEL)action;
- (id)image;
- (id)title;
- (id)initWithItemIdentifier:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)_menuFormRepresentationForOverflowMenu;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)_isCustomItemType;
- (id)menuFormRepresentation;
- (void)validate;
- (void)setBordered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)_setToolbar:(id)a0;
- (void)_standardCommonSubitemMenuFormRepresentationClicked:(id)a0;
- (id)_allocDefaultView;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)a0 isInPalette:(BOOL)a1;
- (id)_viewsArray;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_itemLayoutChanged;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)a0 forDisplayMode:(unsigned long long)a1 isInPalette:(BOOL)a2;
- (BOOL)_viewIsEnabledAtIndex:(long long)a0;
- (id)_itemAtLabelIndex:(long long)a0;
- (id)_itemAtViewIndex:(long long)a0;
- (void)_forceSetView:(id)a0;
- (void)_setItemViewer:(id)a0;
- (id)_buttonAtIndex:(unsigned long long)a0;
- (id)_initialViewToSelectFromDirection:(long long)a0;
- (void)_performActionForPicker:(id)a0;
- (id)_defaultGroupViewIfUsed;
- (id)_defaultPickerViewIfUsed;
- (BOOL)validateGroupAction;
- (BOOL)_subitemsContainCustomViews;
- (void)_updateViewRepresentation;
- (long long)_safeControlRepresentation;
- (void)setSelected:(BOOL)a0 atIndex:(long long)a1;
- (BOOL)isSelectedAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_segmentedControlRectForItemAtIndex:(long long)a0;
- (BOOL)_allowsDefaultMenuFormRepresentation;
- (id)_menuFormRepresentationForOverflowMenuOfSubitem:(id)a0;

@end
