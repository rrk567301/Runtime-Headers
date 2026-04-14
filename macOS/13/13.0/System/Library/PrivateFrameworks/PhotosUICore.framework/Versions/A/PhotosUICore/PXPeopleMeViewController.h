@class NSButton, UXLabel, PXPeopleScalableAvatarView;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UXViewController

@property (retain) id<PXPerson> suggestedPerson;
@property (retain, nonatomic) NSButton *confirmButton;
@property (retain, nonatomic) NSButton *denyButton;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPeopleMeViewControllerDataSource> dataSource;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) double sideInsets;
@property (readonly, nonatomic) double preferredHeight;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)viewDidLoad;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_confirmMe:(id)a0;
- (void)_rejectMe:(id)a0;
- (id)initWithDataSource:(id)a0 dismissHandler:(id /* block */)a1;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 destructive:(BOOL)a2;
- (void)_dismissViewControllerAsConfirmed:(BOOL)a0;

@end
