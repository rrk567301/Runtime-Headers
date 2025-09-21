@class NSPopUpButtonCell, NSSegmentedControl;

@interface AddRemoveView : NSView {
    NSSegmentedControl *mAddRemoveControl;
    NSPopUpButtonCell *mActionPopupCell;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL addAction;
@property (nonatomic) SEL deleteAction;
@property (nonatomic) char showsActionButton;
@property (nonatomic, getter=isAddButtonEnabled) char addButtonEnabled;
@property (nonatomic, getter=isDeleteButtonEnabled) char deleteButtonEnabled;
@property (nonatomic, getter=isActionButtonEnabled) char actionButtonEnabled;
@property (nonatomic) char popupButtonShowsArrow;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setMenu:(id)a0;
- (void)setDeleteButtonToolTip:(id)a0;
- (void)_segmentAction:(id)a0;
- (void)_createButtons;
- (char)setActionButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setActionButtonEnabled:(char)a0;
- (void)setActionButtonKeyEquivalent:(id)a0;
- (void)setActionButtonMenu:(id)a0;
- (void)setActionButtonToolTip:(id)a0;
- (char)setAddButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setAddButtonEnabled:(char)a0;
- (void)setAddButtonKeyEquivalent:(id)a0;
- (void)setAddButtonToolTip:(id)a0;
- (char)setDeleteButtonAXOverrideValue:(id)a0 forAttribute:(id)a1;
- (void)setDeleteButtonEnabled:(char)a0;
- (void)setDeleteButtonKeyEquivalent:(id)a0;

@end
