@class NSBannerView, NSMutableArray, NSButton;

@interface NSRuleEditorViewSliceRow : NSRuleEditorViewSlice {
    NSMutableArray *_ruleOptionViews;
    NSMutableArray *_ruleOptionFrames;
    NSMutableArray *_correspondingRuleItems;
    NSMutableArray *_ruleOptionInitialViewFrames;
    NSBannerView *_bannerView;
    NSButton *_addButton;
    NSButton *_subtractButton;
    long long _rowType;
    long long _plusButtonRowType;
    struct { unsigned char editable : 1; unsigned char horizontalLayoutWasInvalidated : 1; unsigned int reserved : 30; } _sliceRowFlags;
    id _sliceRowReserved;
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (BOOL)validateMenuItem:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_handleFrameChangeForSubview:(id)a0;
- (void)_commonInit;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)a0;
- (id)_addButton;
- (void)_updateButtonVisibilities;
- (void)_reconfigureSubviews;
- (double)_alignmentGridWidth;
- (BOOL)_plusMinusButtonsAcceptFirstMouse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ruleEditorView:(id)a1;
- (BOOL)containsDisplayValue:(id)a0;
- (void)_relayoutSubviewsWidthChanged:(BOOL)a0;
- (void)_setHideNonPartDrawing:(BOOL)a0;
- (void)_ruleOptionPopupChangedAction:(id)a0;
- (void)_addOption:(id)a0;
- (void)_deleteOption:(id)a0;
- (double)_interviewHorizontalPadding;
- (double)_minimumVerticalPopupPadding;
- (double)_leftmostViewFixedHorizontalPadding;
- (double)_indentationHorizontalPadding;
- (double)_rowButtonsRightHorizontalPadding;
- (double)_rowButtonsLeftHorizontalPadding;
- (double)_rowButtonsInterviewHorizontalPadding;
- (id)_createAddRowButton;
- (id)_createDeleteRowButton;
- (id)_createStaticTextFieldWithStringValue:(id)a0;
- (id)_createPopUpButtonWithItems:(id)a0 selectedItemIndex:(long long)a1;
- (id)_createMenuItemWithTitle:(id)a0;
- (id)_createMenuSeparatorItem;
- (BOOL)_isRuleStaticTextField:(id)a0;
- (BOOL)_isRulePopup:(id)a0;
- (void)_tightenResizables:(id)a0 intoGivenWidth:(double)a1;
- (double)_minWidthForPass:(long long)a0 forView:(id)a1 withProposedMinWidth:(double)a2;
- (void)_emptyRulePartSubviews;
- (void)_updateEnabledStateForSubviews;
- (id)_sortOptionDictionariesByLayoutOrder:(id)a0;
- (BOOL)_nestingModeShouldHideAddButton;
- (BOOL)_nestingModeShouldHideSubtractButton;
- (unsigned long long)_rowType;
- (void)_setRowType:(unsigned long long)a0;
- (void)_configurePlusButtonByRowType:(long long)a0;
- (void)_setRowTypeToAddFromPlusButton:(long long)a0;
- (BOOL)_dropsIndentWhenImmediatelyBelow;
- (id)_subtractButton;

@end
