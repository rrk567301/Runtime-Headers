@class NSUICollectionViewCell, NSView, GKPlayer, GKDashboardPlayerPhotoView;

@interface GKDashboardPlayerShadowView : NSView

@property (readonly, nonatomic) NSView *parentView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) NSUICollectionViewCell *parentCell;
@property (readonly, nonatomic) BOOL isUsingPlaceholder;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic) BOOL dimmed;

- (void)setPlayer:(id)a0;
- (id)player;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)parentView;
- (void)invalidatePhoto;
- (BOOL)isUsingPlaceholder;
- (void)setupPhoto;

@end
