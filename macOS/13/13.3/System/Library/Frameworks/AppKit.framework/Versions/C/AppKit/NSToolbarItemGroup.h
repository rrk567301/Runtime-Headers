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

+ (id)groupWithItemIdentifier:(id)a0 images:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;
+ (id)groupWithItemIdentifier:(id)a0 titles:(id)a1 selectionMode:(long long)a2 labels:(id)a3 target:(id)a4 action:(SEL)a5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (SEL)action;
- (void)setAction:(SEL)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)view;
- (id)image;
- (id)title;
- (void)_setItemViewer:(id)a0;
- (id)_buttonAtIndex:(unsigned long long)a0;
- (id)_allocDefaultView;
- (BOOL)_allowsDefaultMenuFormRepresentation;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)a0 forDisplayMode:(unsigned long long)a1 isInPalette:(BOOL)a2;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)a0 isInPalette:(BOOL)a1;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_defaultGroupViewIfUsed;
- (id)_defaultPickerViewIfUsed;
- (void)_forceSetView:(id)a0;
- (id)_initialViewToSelectFromDirection:(long long)a0;
- (BOOL)_isCustomItemType;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (id)_itemAtLabelIndex:(long long)a0;
- (id)_itemAtViewIndex:(long long)a0;
- (void)_itemLayoutChanged;
- (id)_menuFormRepresentationForOverflowMenu;
- (id)_menuFormRepresentationForOverflowMenuOfSubitem:(id)a0;
- (void)_performActionForPicker:(id)a0;
- (long long)_safeControlRepresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_segmentedControlRectForItemAtIndex:(long long)a0;
- (void)_setToolbar:(id)a0;
- (void)_standardCommonSubitemMenuFormRepresentationClicked:(id)a0;
- (BOOL)_subitemsContainCustomViews;
- (void)_updateViewRepresentation;
- (BOOL)_viewIsEnabledAtIndex:(long long)a0;
- (id)_viewsArray;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isSelectedAtIndex:(long long)a0;
- (id)menuFormRepresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)setBordered:(BOOL)a0;
- (void)setSelected:(BOOL)a0 atIndex:(long long)a1;
- (void)validate;
- (BOOL)validateGroupAction;
- (BOOL)validateMenuItem:(id)a0;

@end
