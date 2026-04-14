@class NSTextField, AVTView, NSString, NSStackView, NSVisualEffectView, LUI2DarkenView, LUI2TextField, NSImageView, LUI2AvatarBackgroundView;

@interface LUI2UserView : LUI2View <AVTViewDelegate, NSAccessibilityButton, LUIStripViewItem>

@property (class, readonly) struct CGSize { double x0; double x1; } size;

@property (retain) NSVisualEffectView *userSelection;
@property (retain) NSVisualEffectView *backgroundView;
@property (retain) LUI2DarkenView *darkenView;
@property (retain) NSStackView *stackView;
@property BOOL avatarShown;
@property (retain) NSTextField *avatarDebugInfo;
@property BOOL selectedInternal;
@property id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isSelected) BOOL selected;
@property (retain) id representedObject;
@property (readonly) NSImageView *userPicture;
@property (readonly) AVTView *userAvatar;
@property (readonly) LUI2AvatarBackgroundView *userAvatarBackground;
@property (readonly) LUI2TextField *userName;
@property (readonly) NSImageView *loggedInIndicator;
@property BOOL canShowAvatar;
@property (getter=isLoggedInIndicatorHidden) BOOL loggedInIndicatorHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseUp:(id)a0;
- (id)firstBaselineAnchor;
- (void)avatarView:(id)a0 didRenderAvatar:(id)a1;
- (id)_avatarViewOptions;
- (void)_setupUserViewUsingVisualEffectView:(BOOL)a0;
- (void)hideUserAvatar;
- (void)showUserAvatar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingVisualEffectBackground:(BOOL)a1;

@end
