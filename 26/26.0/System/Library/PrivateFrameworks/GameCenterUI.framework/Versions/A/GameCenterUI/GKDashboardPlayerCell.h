@class NSTextField, NSString, GKPlayer, NSView, GKDashboardPlayerShadowView, NSLayoutConstraint, NSColor;

@interface GKDashboardPlayerCell : NSUICollectionViewCell

@property (retain, nonatomic) NSColor *nameColor;
@property (retain, nonatomic) NSColor *statusColor;
@property (nonatomic) double playerViewBottomToNameLabelTopConstant;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL onDarkBackground;
@property (retain, nonatomic) NSColor *defaultContentBackgroundColor;
@property (readonly, nonatomic) NSView *popoverSourceView;
@property (nonatomic) GKDashboardPlayerShadowView *playerView;
@property (nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint;
@property (nonatomic) NSTextField *nameLabel;
@property (nonatomic) NSTextField *statusLabel;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)preferredCollectionHeight;

- (void)setHighlighted:(BOOL)a0;
- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setStatusText:(id)a0;
- (void)setNameText:(id)a0;
- (void)setStatusWithLastPlayedDate:(id)a0;
- (void)updateLabelColorForDashboard;

@end
