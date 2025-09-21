@class NSObject, NSImageView, GKPlayer;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : NSView

@property (retain, nonatomic) NSImageView *avatarImageView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) char useDarkerPlaceholder;
@property (nonatomic) char dimmed;
@property (nonatomic, getter=isUsingPlaceholder) char usingPlaceholder;
@property (readonly, nonatomic) char hasImage;
@property (nonatomic) char selected;
@property (nonatomic) char focusable;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;
@property (nonatomic) char _gkUserInteractionDisabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityLabel:(id)a0;
- (char)canBecomeFocused;
- (void)invalidatePhoto;
- (void)didClickPlayerAvatar:(id)a0;
- (void)refreshImageWithCompletionHandler:(id /* block */)a0;
- (void)setPlayer:(id)a0 completionHandler:(id /* block */)a1;

@end
