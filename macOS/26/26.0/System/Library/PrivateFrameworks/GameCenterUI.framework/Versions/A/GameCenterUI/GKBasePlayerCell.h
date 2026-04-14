@class NSTextField, NSString, GKPlayer, GKDashboardPlayerPhotoView;

@interface GKBasePlayerCell : GKCollectionViewCell

@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView;

+ (double)defaultRowHeight;
+ (id)itemHeightList;

- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setRepresentedItem:(id)a0;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)didUpdateModel;

@end
