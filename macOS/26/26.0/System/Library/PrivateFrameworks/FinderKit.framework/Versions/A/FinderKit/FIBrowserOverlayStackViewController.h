@class NSStackView, FITopBarContainerView, FIArrangeByMenuController, NSObject, FILocationPopUp, FI_TTargetActionFunctor, NSBox, FI_TTextField, NSString, NSSearchField, NSLayoutConstraint, FIViewOptionsPopUpController, FI_TContainerLayoutManager, FI_TButton, FI_TSegmentedControl, FIArrangeByPopUp;
@protocol FIBrowserOverlayStackViewDelegate, FILocationPopUpDelegate;

@interface FIBrowserOverlayStackViewController : FI_TViewController <TMarkTornDown> {
    FITopBarContainerView *_topBar;
    NSStackView *_toolbarButtonStackView;
    NSLayoutConstraint *_toolbarButtonStackViewToWhereStackViewGapConstraint;
    FI_TSegmentedControl *_backForward;
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
    FI_TTargetActionFunctor *_searchFieldTextChangedFunctor;
    FI_TTargetActionFunctor *_searchFieldCancelButtonFunctor;
    NSBox *_horizontalLineAtTop;
    NSBox *_horizontalLineAtBottom;
    struct TNSWeakPtr<NSObject<FIBrowserOverlayStackViewDelegate>> { NSObject<FIBrowserOverlayStackViewDelegate> *fWeakObject; } _delegate;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
}

@property (readonly, retain, nonatomic) NSStackView *topStackView;
@property (readonly, retain, nonatomic) NSStackView *bottomStackView;
@property (nonatomic) int viewStyle;
@property (weak, nonatomic) NSObject<FIBrowserOverlayStackViewDelegate> *delegate;
@property (weak, nonatomic) id<FILocationPopUpDelegate> locationPopUpDelegate;
@property (readonly, retain, nonatomic) FIArrangeByMenuController *arrangeByMenuController;
@property (readonly, retain, nonatomic) NSSearchField *searchField;
@property (readonly, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (nonatomic) BOOL inSavePanel;
@property (nonatomic) BOOL expanded;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (double)topBarHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nibName;
- (id)locationAreaLeadingLayoutAnchor;
- (BOOL)_performKeyEquivalent:(id)a0;
- (id)locationAreaTrailingLayoutAnchor;
- (id)whereLabelLeadingLayoutAnchor;
- (id)whereLabelTrailingLayoutAnchor;
- (void)aboutToTearDown;
- (void)configureView;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)adjustBackForwardSegments:(id)a0;
- (void)configureArrangeByMenu:(id)a0;
- (id)configureContainerLayoutManager:(id)a0;
- (void)configureViewOptionsPopUp:(id)a0;
- (void)iconAppearancePrefChanged:(BOOL)a0;
- (void)prepareToHide;
- (void)setAlternateICloudContainerInLocationPopUp:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 name:(id)a1;
- (void)setBackButtonFunc:(const void *)a0;
- (void)setCollapseButtonFunc:(const void *)a0;
- (void)setForwardButtonFunc:(const void *)a0;
- (void)setSearchCancelButtonFunc:(const void *)a0;
- (void)setSearchTextChangedFunc:(const void *)a0;
- (void)setShouldShowCloudInLocationPopUp:(BOOL)a0;
- (void)updateExpanded;

@end
