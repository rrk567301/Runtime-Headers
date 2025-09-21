@class NSString, NSTitlebarSeparatorView, NSDictionary, NSClipView;

@interface NSTitlebarAccessoryViewController : NSViewController <NSAnimationDelegate, NSAnimatablePropertyContainer> {
    double _fullScreenMinHeight;
    NSClipView *_containingClipView;
    NSTitlebarSeparatorView *_separatorView;
    double _revealAmount;
    BOOL _allowsAutomaticSeparator;
    BOOL _automaticallyAdjustsSize;
    unsigned long long _barBackgroundRequirement;
    long long _updateCount;
    unsigned char _hidden : 1;
    unsigned char _unusedTVC2 : 1;
    unsigned char _updatingFrame : 1;
    unsigned char _registered : 1;
    unsigned int _reservedTVC : 28;
    id _animationData;
    double _visibleAmount;
}

@property double revealAmount;
@property BOOL inFullScreen;
@property BOOL isToolbarAccessoryView;
@property (readonly) NSClipView *containingClipView;
@property (readonly) NSTitlebarSeparatorView *separatorView;
@property (readonly) double visibleAmount;
@property long long layoutAttribute;
@property double fullScreenMinHeight;
@property (getter=isHidden) BOOL hidden;
@property BOOL automaticallyAdjustsSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDictionary *animations;

+ (id)defaultAnimationForKey:(id)a0;

- (id)animator;
- (void)dealloc;
- (void)setView:(id)a0;
- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (id)view;
- (void).cxx_destruct;
- (Class)_animatorClass;
- (void)_auxiliaryViewFrameChanged:(id)a0;
- (unsigned long long)_barBackgroundRequirement;
- (unsigned long long)_clipViewAutoresizingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentClipViewFrame;
- (void)_finishVisibilityAnimation:(float)a0;
- (id)_makeFloatingTrailingWidget;
- (void)_registerForFrameChangedNotifications;
- (void)_setBarBackgroundRequirement:(unsigned long long)a0;
- (void)_setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setUpdatingFrame:(BOOL)a0;
- (void)_startAnimatingPlacement:(BOOL)a0;
- (void)_unregisterForFrameChangeNotifications;
- (void)_updateAccessorySizeIfNeeded;
- (void)_updateClipViewFrame;
- (void)_updateSeparatorViewFrame;
- (void)_updateVisibilityAnimationWithProgress:(float)a0;
- (unsigned long long)_viewAutoresizingMask;
- (BOOL)_viewControllerSupports10_10Features;
- (BOOL)allowsAutomaticSeparator;
- (id)animationData;
- (id)animationForKey:(id)a0;
- (BOOL)prefersDefaultSize;
- (void)recalculateKeyViewLoop;
- (void)setAllowsAutomaticSeparator:(BOOL)a0;
- (void)setPrefersDefaultSize:(BOOL)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
