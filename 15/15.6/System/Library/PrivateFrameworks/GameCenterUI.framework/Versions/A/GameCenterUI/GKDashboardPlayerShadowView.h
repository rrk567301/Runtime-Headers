@class NSUICollectionViewCell, NSView, GKPlayer, GKDashboardPlayerPhotoView;

@interface GKDashboardPlayerShadowView : NSView

@property (readonly, nonatomic) NSView *parentView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) NSUICollectionViewCell *parentCell;
@property (readonly, nonatomic) char isUsingPlaceholder;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic) char dimmed;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)parentView;
- (void)setPlayer:(id)a0;
- (id)player;
- (void)invalidatePhoto;
- (char)isUsingPlaceholder;
- (void)setupPhoto;

@end
