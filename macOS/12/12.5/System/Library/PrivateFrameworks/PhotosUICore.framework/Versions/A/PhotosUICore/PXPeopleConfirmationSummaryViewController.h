@class UXLabel, NSLayoutConstraint;
@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UXViewController

@property (retain) NSLayoutConstraint *labelSpacingConstraint;
@property (retain) UXLabel *summaryLabel;
@property (weak) id<PXPeopleSummaryDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;

@end
