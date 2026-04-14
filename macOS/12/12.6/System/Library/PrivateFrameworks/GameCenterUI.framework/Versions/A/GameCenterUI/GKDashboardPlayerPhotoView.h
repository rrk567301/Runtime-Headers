@class NSObject, NSImageView, GKPlayer;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : NSView

@property (retain, nonatomic) NSImageView *avatarImageView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL useDarkerPlaceholder;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;
@property (nonatomic) BOOL _gkUserInteractionDisabled;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)commonInit;
- (void)setPlayer:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidatePhoto;
- (void)refreshImageWithCompletionHandler:(id /* block */)a0;

@end
