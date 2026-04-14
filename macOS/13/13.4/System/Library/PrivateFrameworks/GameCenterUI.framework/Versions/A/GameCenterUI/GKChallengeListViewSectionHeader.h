@class NSTextField, NSClickGestureRecognizer;

@interface GKChallengeListViewSectionHeader : NSUICollectionReusableView

@property (retain, nonatomic) NSClickGestureRecognizer *secondaryLabelClickGesture;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (nonatomic) BOOL wantsSecondaryLabel;
@property (retain, nonatomic) NSTextField *secondaryLabel;
@property (copy, nonatomic) id /* block */ secondaryLabelTapHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)secondaryLabelTapped:(id)a0;

@end
