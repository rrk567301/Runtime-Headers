@class NSTextField, NSView, NSString, GKLeaderboard, NSVisualEffectView, NSColor, NSLayoutConstraint, NSImageView, GKLeaderboardSet;

@interface GKLeaderboardCell : NSCollectionViewItem

@property (retain, nonatomic) NSImageView *iconView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *countLabel;
@property (retain, nonatomic) NSView *overlayView;
@property (retain, nonatomic) NSLayoutConstraint *iconContainerHeight;
@property (retain, nonatomic) NSLayoutConstraint *minimumIconHeight;
@property (retain, nonatomic) NSColor *titleLabelColor;
@property NSView *containerView;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) NSString *dataToken;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) NSView *popoverSourceView;

- (void)updateLayout;
- (void)updateLayer;
- (void)updateImage;
- (BOOL)canBecomeFocused;
- (id)contentView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setHighlightState:(long long)a0;
- (void)updateOverlay;
- (void)addVisualEffect;
- (void)setupFallbackIcon;
- (void)updateRank;
- (void)updateSummary;

@end
