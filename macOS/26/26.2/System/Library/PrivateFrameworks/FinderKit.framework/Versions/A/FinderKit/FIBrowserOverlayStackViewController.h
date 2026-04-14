@class NSStackView, FITopBarContainerView, FIArrangeByMenuController, NSObject, NSButtonCell, FILocationPopUp, NSBox, FI_TTextField, NSString, NSSearchField, NSLayoutConstraint, FIViewOptionsPopUpController, FI_TContainerLayoutManager, FI_TButton, FIArrangeByPopUp, FI_TSegmentedControl;
@protocol FILocationPopUpDelegate, FIBrowserOverlayStackViewTarget;

@interface FIBrowserOverlayStackViewController : FI_TViewController <TMarkTornDown> {
    FITopBarContainerView *_topBar;
    NSStackView *_toolbarButtonStackView;
    NSLayoutConstraint *_toolbarButtonStackViewToWhereStackViewGapConstraint;
    FIViewOptionsPopUpController *_viewOptionsPopUpController;
    FIArrangeByPopUp *_arrangeByPopUp;
    NSStackView *_locationPopUpStackView;
    NSLayoutConstraint *_locationHeightConstraint;
    NSLayoutConstraint *_locationPopUpTopMarginConstraint;
    FI_TTextField *_whereLabel;
    FILocationPopUp *_locationPopUp;
    FI_TButton *_collapsePanelButton;
    NSLayoutConstraint *_searchFieldWidthConstraint;
    NSLayoutConstraint *_searchFieldToWhereStackViewGapConstraint;
    NSBox *_horizontalLineAtTop;
    NSBox *_horizontalLineAtBottom;
    struct TNSWeakPtr<NSObject<FIBrowserOverlayStackViewTarget>> { NSObject<FIBrowserOverlayStackViewTarget> *fWeakObject; } _target;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
}

@property (readonly, retain, nonatomic) NSStackView *topStackView;
@property (readonly, retain, nonatomic) NSStackView *bottomStackView;
@property (nonatomic) int viewStyle;
@property (weak, nonatomic) NSObject<FIBrowserOverlayStackViewTarget> *target;
@property (weak, nonatomic) id<FILocationPopUpDelegate> locationPopUpDelegate;
@property (readonly, retain, nonatomic) FIArrangeByMenuController *arrangeByMenuController;
@property (readonly, retain, nonatomic) NSSearchField *searchField;
@property (readonly, retain, nonatomic) NSButtonCell *searchFieldCancelButtonCell;
@property (readonly, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (retain, nonatomic) FI_TSegmentedControl *backForward;
@property (nonatomic) BOOL inSavePanel;
@property (nonatomic) BOOL expanded;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topBarHeight;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (id)locationAreaLeadingLayoutAnchor;
- (id)nibName;
- (BOOL)_performKeyEquivalent:(id)a0;
- (id)locationAreaTrailingLayoutAnchor;
- (id)whereLabelLeadingLayoutAnchor;
- (id)whereLabelTrailingLayoutAnchor;
- (void)aboutToTearDown;
- (void)configureView;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)configureArrangeByMenu:(id)a0;
- (id)configureContainerLayoutManager:(id)a0;
- (void)configureViewOptionsPopUp:(id)a0;
- (void)iconAppearancePrefChanged:(BOOL)a0;
- (void)prepareToHide;
- (void)setAlternateICloudContainerInLocationPopUp:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 name:(id)a1;
- (void)setShouldShowCloudInLocationPopUp:(BOOL)a0;
- (void)updateExpanded;

@end
