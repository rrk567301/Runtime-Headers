@class NSTextField, NSProgressIndicator, NSLayoutConstraint, NSButton;

@interface GKShowMoreView : NSUICollectionReusableView

@property (nonatomic) NSButton *showAllButton;
@property (nonatomic) NSLayoutConstraint *showAllHorizontalConstraint;
@property (nonatomic) NSTextField *loadingLabel;
@property (nonatomic) NSProgressIndicator *loadingSpinner;
@property (nonatomic) NSLayoutConstraint *loadingLabelHorizontalConstraint;
@property (nonatomic) NSLayoutConstraint *spinnerToLabelConstraint;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) char showShowAll;
@property (nonatomic) long long numberToShow;
@property (nonatomic) SEL showMoreAction;
@property (nonatomic) char loading;
@property (nonatomic) double textAlignmentOffset;

+ (char)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateConstraints;
- (void)showMore:(id)a0;
- (void)updateLabels;

@end
