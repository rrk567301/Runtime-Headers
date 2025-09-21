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
- (id)_subtractButton;
- (char)_nestingModeShouldHideAddButton;
- (void)_setRowTypeToAddFromPlusButton:(long long)a0;
- (id)_addButton;
- (void)_addOption:(id)a0;
- (double)_alignmentGridWidth;
- (void)_commonInit;
- (void)_configurePlusButtonByRowType:(long long)a0;
- (id)_createAddRowButton;
- (id)_createDeleteRowButton;
- (id)_createMenuItemWithTitle:(id)a0;
- (id)_createMenuSeparatorItem;
- (id)_createPopUpButtonWithItems:(id)a0 selectedItemIndex:(long long)a1;
- (id)_createStaticTextFieldWithStringValue:(id)a0;
- (void)_deleteOption:(id)a0;
- (char)_dropsIndentWhenImmediatelyBelow;
- (void)_emptyRulePartSubviews;
- (void)_handleFrameChangeForSubview:(id)a0;
- (double)_indentationHorizontalPadding;
- (double)_interviewHorizontalPadding;
- (char)_isRulePopup:(id)a0;
- (char)_isRuleStaticTextField:(id)a0;
- (double)_leftmostViewFixedHorizontalPadding;
- (double)_minWidthForPass:(long long)a0 forView:(id)a1 withProposedMinWidth:(double)a2;
- (double)_minimumVerticalPopupPadding;
- (char)_nestingModeShouldHideSubtractButton;
- (char)_plusMinusButtonsAcceptFirstMouse;
- (void)_reconfigureSubviews;
- (void)_relayoutSubviewsWidthChanged:(char)a0;
- (double)_rowButtonsInterviewHorizontalPadding;
- (double)_rowButtonsLeftHorizontalPadding;
- (double)_rowButtonsRightHorizontalPadding;
- (unsigned long long)_rowType;
- (void)_ruleOptionPopupChangedAction:(id)a0;
- (void)_setHideNonPartDrawing:(char)a0;
- (void)_setRowType:(unsigned long long)a0;
- (id)_sortOptionDictionariesByLayoutOrder:(id)a0;
- (void)_tightenResizables:(id)a0 intoGivenWidth:(double)a1;
- (void)_updateButtonVisibilities;
- (void)_updateEnabledStateForSubviews;
- (char)containsDisplayValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ruleEditorView:(id)a1;
- (char)isEditable;
- (void)setEditable:(char)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (char)validateMenuItem:(id)a0;
- (void)viewDidMoveToWindow;

@end
