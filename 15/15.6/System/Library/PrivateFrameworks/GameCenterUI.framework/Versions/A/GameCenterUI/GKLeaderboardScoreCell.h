@class NSTextField, NSString, NSView, NSLayoutConstraint, GKDashboardPlayerPhotoView, GKLeaderboardEntry;
@protocol GKLeaderboardScoreActionDelegate;

@interface GKLeaderboardScoreCell : NSCollectionViewItem

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) char isLocalPlayerScore;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property NSTextField *rankLabel;
@property NSTextField *nameLabel;
@property NSTextField *subtitleLabel;
@property NSTextField *scoreLabel;
@property NSView *topLine;
@property NSView *monogramColorView;
@property (retain, nonatomic) GKLeaderboardEntry *entry;
@property (nonatomic) char lineVisible;
@property (weak, nonatomic) id<GKLeaderboardScoreActionDelegate> delegate;
@property (nonatomic) char shouldShowContextMenu;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)rightMouseDown:(id)a0;
- (void)awakeFromNib;
- (void)mouseDown:(id)a0;
- (void)setHighlightState:(long long)a0;
- (void)updateLayer;
- (void)setLineVisible:(char)a0;
- (char)canBecomeFocused;
- (id)cellBackgroundColor:(char)a0;
- (char)lineVisible;
- (void)setupForLeaderboardEntry:(id)a0;
- (void)showChallengePickerWithEvent:(id)a0;
- (void)updateLayerMask:(id)a0;

@end
