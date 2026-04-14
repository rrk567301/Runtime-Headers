@class NSFont, NSString, NSArray, NSPopUpButton, NSImage, NSLayoutConstraint, NSMutableIndexSet, NSSegmentedControl;

@interface NSToolbarItemGroupPickerView : NSView {
    NSArray *_subitems;
    long long _controlRepresentation;
    long long _effectiveControlRepresentation;
    long long _selectionMode;
    NSString *_title;
    NSImage *_image;
    unsigned long long _controlSize;
    NSFont *_font;
    long long _selectedIndex;
    NSMutableIndexSet *_selectedIndexes;
    BOOL _enabled;
    struct CGSize { double width; double height; } _minimumCollapsedSize;
    struct CGSize { double width; double height; } _minimumExpandedSize;
    struct CGSize { double width; double height; } _maximumExpandedSize;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSSegmentedControl *_segmentedControl;
    NSPopUpButton *_popUpButton;
}

@property (retain) NSArray *subitems;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *title;
@property (retain) NSImage *image;
@property unsigned long long controlSize;
@property (copy) NSFont *font;
@property long long controlRepresentation;
@property long long selectionMode;
@property long long selectedIndex;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)updateConstraints;
- (id)_imageToDisplayForImage:(id)a0;
- (void)_invalidateCachedSizes;
- (void)setSelected:(BOOL)a0 atIndex:(long long)a1;
- (BOOL)isSelectedAtIndex:(long long)a0;
- (void)itemToggledAtIndex:(long long)a0;
- (void)_loadCollapsedRepresentation;
- (void)_configureAsExpandedRepresentation;
- (void)_unloadCollapsedRepresentation;
- (void)_configureAsCollapsedRepresentation;
- (void)_loadExpandedRepresentation;
- (void)_endObservingSubitems;
- (void)_beginObservingSubitems;
- (void)_configureExpandedSubitems;
- (void)_configureCollapsedSubitems;
- (void)_configureExpandedSubitemAtIndex:(long long)a0;
- (void)_configureCollapsedSubitemAtIndex:(long long)a0;
- (void)_updateCollapsedDisplayItem;
- (void)_unloadExpandedRepresentation;
- (void)_updateSpringLoading;
- (void)_syncSelection;
- (struct CGSize { double x0; double x1; })_maximumExpandedAlignmentSize;
- (struct CGSize { double x0; double x1; })_minimumCollapsedAlignmentSize;
- (struct CGSize { double x0; double x1; })_minimumExpandedAlignmentSize;
- (void)_optionInvoked:(id)a0;
- (void)_updatePopUpButtonSizingBehavior:(long long)a0;

@end
