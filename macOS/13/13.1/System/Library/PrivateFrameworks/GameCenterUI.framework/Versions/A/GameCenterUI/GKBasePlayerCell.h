@class NSTextField, NSString, GKPlayer, GKDashboardPlayerPhotoView;

@interface GKBasePlayerCell : GKCollectionViewCell

@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView;

+ (double)defaultRowHeight;
+ (id)itemHeightList;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateLayer;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setRepresentedItem:(id)a0;
- (void)didUpdateModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;

@end
