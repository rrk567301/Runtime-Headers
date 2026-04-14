@class NSString, NSTextField;

@interface GameCenterUI.GKPickerGroupCell : GameCenterUI.GKPickerGroupCollectionViewCell {
    void /* unknown type, empty encoding */ playerGroupView;
    void /* unknown type, empty encoding */ players;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* function */ container;
@property (nonatomic, weak) void /* function */ messageIcon;
@property (nonatomic, weak) void /* function */ iconContainer;
@property (nonatomic, weak) void /* function */ ringView;
@property (nonatomic, weak) void /* function */ titleLabel;
@property (nonatomic, weak) void /* function */ subtitleLabel;
@property (nonatomic, weak) void /* function */ nearbyIconContainer;
@property (nonatomic, weak) void /* function */ nearbyIconVisualEffectView;
@property (nonatomic, weak) void /* function */ nearbyIcon;
@property (nonatomic, weak) void /* function */ groupCellDelegate;
@property (nonatomic) long long highlightState;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSTextField *accessibilityTitleLabel;

- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;

@end
