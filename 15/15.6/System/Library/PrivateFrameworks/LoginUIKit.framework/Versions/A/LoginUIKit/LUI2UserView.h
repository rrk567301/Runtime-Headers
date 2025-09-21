@class NSTextField, NSView, AVTView, NSString, NSVisualEffectView, NSStackView, LUI2DarkenView, LUI2TextField, NSImageView, LUI2TrackedImageView, LUI2TrackedAvatarBackgroundView;

@interface LUI2UserView : LUI2View <AVTViewDelegate, NSAccessibilityButton>

@property (class, readonly) struct CGSize { double x0; double x1; } size;
@property (class, readonly) struct { struct CGPoint { double x0; double x1; } x0; double x1; struct CGSize { double x0; double x1; } x2; } defaultUserViewDimensions;

@property (readonly) NSImageView *loggedInIndicator;
@property (retain) NSView *userSelection;
@property (retain) NSVisualEffectView *backgroundView;
@property (retain) LUI2DarkenView *darkenView;
@property (retain) NSStackView *stackView;
@property char avatarShown;
@property (retain) NSTextField *avatarDebugInfo;
@property char selectedInternal;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) char enabled;
@property (getter=isSelected) char selected;
@property (retain) id representedObject;
@property (readonly) LUI2TrackedImageView *userPicture;
@property (readonly) AVTView *userAvatar;
@property (readonly) LUI2TrackedAvatarBackgroundView *userAvatarBackground;
@property (readonly) LUI2TextField *userName;
@property char canShowAvatar;
@property (getter=isLoggedInIndicatorHidden) char loggedInIndicatorHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (struct { struct CGPoint { double x0; double x1; } x0; double x1; struct CGSize { double x0; double x1; } x2; })userViewDimensionsForPercentageOfDefault:(double)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setHighlighted:(char)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (char)allowsVibrancy;
- (id)firstBaselineAnchor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (id)_avatarViewOptions;
- (void)_setupUserViewUsingVisualEffectView:(char)a0;
- (void)_setupUserViewWithAvatarOnSideUsingVisualEffectView:(char)a0;
- (void)_setupUserViewWithAvatarOnTopUsingVisualEffectView:(char)a0;
- (void)avatarView:(id)a0 didRenderAvatar:(id)a1;
- (void)clearImageTracking;
- (double)deltaUserNameWidthFromMax;
- (void)hideUserAvatar;
- (id)hitTestCircleInView:(id)a0 withLocalPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)hitTestWithLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingVisualEffectBackground:(char)a1;
- (char)isImageTracking:(id)a0;
- (char)performAction;
- (void)showUserAvatar;
- (void)startImageTracking:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
- (void)stopImageTracking:(id)a0;

@end
