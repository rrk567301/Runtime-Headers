@class NSImageView, GKGame, NSTextField, GKGameRecord, NSLayoutConstraint;

@interface GKBaseGameCell : GKCollectionViewCell

@property (retain, nonatomic) NSImageView *iconView;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (nonatomic) NSLayoutConstraint *nameYConstraint;
@property (nonatomic) double nameYOffset;

+ (double)defaultRowHeight;
+ (id)itemHeightList;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setRepresentedItem:(id)a0;
- (void)didUpdateModel;
- (void)didUpdateModel;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;

@end
