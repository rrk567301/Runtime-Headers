@class NSTextField, NSString, NSView, NSLayoutConstraint, GKDashboardPlayerPhotoView, GKLeaderboardEntry;
@protocol GKLeaderboardScoreActionDelegate;

@interface GKLeaderboardScoreCell : NSCollectionViewItem

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) BOOL isLocalPlayerScore;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property NSTextField *rankLabel;
@property NSTextField *nameLabel;
@property NSTextField *subtitleLabel;
@property NSTextField *scoreLabel;
@property NSView *topLine;
@property NSView *monogramColorView;
@property (retain, nonatomic) GKLeaderboardEntry *entry;
@property (nonatomic) BOOL lineVisible;
@property (weak, nonatomic) id<GKLeaderboardScoreActionDelegate> delegate;
@property (nonatomic) BOOL shouldShowContextMenu;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void)mouseDown:(id)a0;
- (void)updateLayer;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)awakeFromNib;
- (void)setHighlightState:(long long)a0;
- (void)setLineVisible:(BOOL)a0;
- (id)cellBackgroundColor:(BOOL)a0;
- (BOOL)lineVisible;
- (void)setupForLeaderboardEntry:(id)a0;
- (void)showChallengePickerWithEvent:(id)a0;
- (void)updateLayerMask:(id)a0;

@end
