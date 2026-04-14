@class NSString, NSTextField;

@interface GameCenterUI.GKPickerGroupNearbyCell : GameCenterUI.GKPickerGroupNearbyCollectionViewCell

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* function */ iconContainer;
@property (nonatomic, weak) void /* function */ badgeLabel;
@property (nonatomic, weak) void /* function */ titleLabel;
@property (nonatomic) long long highlightState;
@property (nonatomic, readonly) NSTextField *accessibilityTitleLabel;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureWithBadgeCount:(long long)a0;

@end
