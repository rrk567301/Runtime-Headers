@class NSButton, UXLabel, PXPeopleScalableAvatarView;
@protocol PXPeopleMeViewControllerDataSource, PXPeopleMeViewControllerDelegate, PXPerson;

@interface PXPeopleMeViewController : UXViewController

@property (retain) id<PXPerson> suggestedPerson;
@property (retain, nonatomic) NSButton *confirmButton;
@property (retain, nonatomic) NSButton *denyButton;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPeopleMeViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<PXPeopleMeViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) double sideInsets;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)viewDidLoad;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 destructive:(BOOL)a2;
- (void)_confirmMe:(id)a0;
- (void)_dismissViewControllerAsConfirmed:(BOOL)a0;
- (void)_rejectMe:(id)a0;
- (id)initWithDataSource:(id)a0 dismissHandler:(id /* block */)a1;
- (double)preferredHeightForWidth:(double)a0;

@end
