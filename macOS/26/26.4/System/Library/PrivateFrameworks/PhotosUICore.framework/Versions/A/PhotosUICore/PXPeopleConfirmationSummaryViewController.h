@class UXLabel, PXPeopleScalableAvatarView, NSLayoutConstraint;
@protocol PXPeopleSummaryDelegate, PXPerson;

@interface PXPeopleConfirmationSummaryViewController : UXViewController

@property (readonly, nonatomic) NSLayoutConstraint *labelSpacingConstraint;
@property (readonly, nonatomic) UXLabel *summaryLabel;
@property (readonly, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPerson> person;
@property (readonly, weak, nonatomic) id<PXPeopleSummaryDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;

@end
