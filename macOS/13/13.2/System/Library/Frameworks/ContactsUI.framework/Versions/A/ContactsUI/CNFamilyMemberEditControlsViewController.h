@class NSString, NSViewController, NSView, CNContactPickerBorderView, NSVisualEffectView, NSStackView, NSButton;
@protocol CNFamilyMemberEditControlsViewControllerDelegate;

@interface CNFamilyMemberEditControlsViewController : NSViewController <CNContactListControllerDelegate>

@property (retain, nonatomic) NSView *buttonStackContainerView;
@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSView *viewForButtonConstraints;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSButton *editControlButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) CNContactPickerBorderView *bottomBorderView;
@property (readonly, weak, nonatomic) id<CNFamilyMemberEditControlsViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) NSViewController *containedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredMinimumSize;
- (void)loadView;
- (void)cancelOperation:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)cancelPressed:(id)a0;
- (void)setupButtons;
- (void)setupViewHierarchy;
- (void)selectionChanged:(BOOL)a0;
- (void)dismissRequested:(BOOL)a0;
- (void)setupUI;
- (void)setUpBottomBorderView;
- (void)setupConstraints;
- (void)editControlButtonPressed:(id)a0;
- (id)initWithContainedViewController:(id)a0 delegate:(id)a1 style:(long long)a2 size:(long long)a3;
- (void)setUpViewForButtonConstraints;
- (void)setupStackView;
- (void)setUpButtonStackContainerView;
- (void)setUpVisualEffectView;
- (BOOL)shouldShowButtonViewUnderContactList;
- (void)setContactListBottomContentInset:(double)a0;
- (void)setUpConstraintsWithViewForButtonConstraints;
- (void)editControlButtonPressedInToggleMode:(id)a0;

@end
