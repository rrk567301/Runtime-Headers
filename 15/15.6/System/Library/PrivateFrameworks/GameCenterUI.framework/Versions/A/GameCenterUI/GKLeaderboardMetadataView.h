@class NSTextField, NSView, NSLayoutConstraint, NSStackView, NSVisualEffectView;

@interface GKLeaderboardMetadataView : NSView

@property (retain, nonatomic) NSStackView *container;
@property (retain, nonatomic) NSLayoutConstraint *containerRightMargin;
@property (retain, nonatomic) NSStackView *header;
@property (retain, nonatomic) NSLayoutConstraint *headerHeight;
@property (retain, nonatomic) NSView *avatarContainer1;
@property (retain, nonatomic) NSView *avatarContainer2;
@property (retain, nonatomic) NSView *avatarContainer3;
@property (retain, nonatomic) NSStackView *body;
@property (retain, nonatomic) NSVisualEffectView *vibrancyView;
@property (retain, nonatomic) NSTextField *rank;
@property (retain, nonatomic) NSTextField *title;
@property (retain, nonatomic) NSTextField *footnote;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureFootnote:(id)a0 altFootnote:(id)a1;
- (void)configureVibrancy:(char)a0;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3 vibrant:(char)a4;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2 vibrant:(char)a3;
- (void)stackVertically:(char)a0;
- (void)updateAvatarContainer:(id)a0 withPlayer:(id)a1;

@end
