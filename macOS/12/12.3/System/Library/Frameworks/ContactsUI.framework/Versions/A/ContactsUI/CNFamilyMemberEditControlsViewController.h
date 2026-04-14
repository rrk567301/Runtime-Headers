@class NSViewController, CNContactPickerBorderView, NSString, NSStackView, NSButton;
@protocol CNFamilyMemberEditControlsViewControllerDelegate;

@interface CNFamilyMemberEditControlsViewController : NSViewController <CNContactListControllerDelegate>

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
- (void)dismissRequested:(BOOL)a0;
- (void)selectionChanged:(BOOL)a0;
- (void)setupUI;
- (void)setupConstraints;
- (void)setUpBottomBorderView;
- (id)initWithContainedViewController:(id)a0 delegate:(id)a1 style:(long long)a2 size:(long long)a3;
- (void)setupStackView;
- (void)editControlButtonPressed:(id)a0;
- (void)editControlButtonPressedInToggleMode:(id)a0;

@end
