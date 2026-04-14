@class NSTextField, NSString, NSView, NSImageView, _TtC12GameCenterUI17GKPlayerGroupView;
@protocol GKDashboardPickerPlayerGroupCellDelegate;

@interface GKDashboardPickerPlayerGroupCell : NSUICollectionViewCell

@property (retain, nonatomic) NSString *lastAppearanceName;
@property (weak) NSView *container;
@property (weak) NSView *iconContainer;
@property (weak) NSTextField *subtitle;
@property (weak) NSTextField *title;
@property (weak) NSView *bottomLine;
@property (weak) NSImageView *checkmark;
@property (weak) NSImageView *messageIcon;
@property (weak) NSView *ringView;
@property (retain, nonatomic) NSString *originalSubtitle;
@property (retain, nonatomic) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView;
@property (nonatomic) BOOL canExpand;
@property (nonatomic) BOOL lineVisible;
@property (nonatomic) BOOL usesClearBackground;
@property (weak, nonatomic) id<GKDashboardPickerPlayerGroupCellDelegate> groupCellDelegate;
@property (retain, nonatomic) NSString *searchText;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)updateLayer;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setHighlightState:(long long)a0;
- (void)setLineVisible:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)a0;
- (BOOL)lineVisible;
- (void)updateTitleForSearchText;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;

@end
