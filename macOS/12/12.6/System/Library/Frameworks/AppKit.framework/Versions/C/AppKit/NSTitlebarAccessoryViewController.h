@class NSString, NSTitlebarSeparatorView, NSDictionary, NSClipView;

@interface NSTitlebarAccessoryViewController : NSViewController <NSAnimationDelegate, NSAnimatablePropertyContainer> {
    double _fullScreenMinHeight;
    NSClipView *_containingClipView;
    NSTitlebarSeparatorView *_separatorView;
    double _revealAmount;
    BOOL _allowsAutomaticSeparator;
    BOOL _automaticallyAdjustsSize;
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
@property BOOL allowsAutomaticSeparator;
@property BOOL prefersDefaultSize;
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

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (id)animator;
- (Class)_animatorClass;
- (id)animationForKey:(id)a0;
- (void)_commonInit;
- (void)recalculateKeyViewLoop;
- (BOOL)_viewControllerSupports10_10Features;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)_makeFloatingTrailingWidget;
- (void)_setUpdatingFrame:(BOOL)a0;
- (void)_unregisterForFrameChangeNotifications;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentClipViewFrame;
- (unsigned long long)_clipViewAutoresizingMask;
- (unsigned long long)_viewAutoresizingMask;
- (void)_updateSeparatorViewFrame;
- (void)_beginUpdates;
- (void)_updateClipViewFrame;
- (void)_endUpdates;
- (void)_registerForFrameChangedNotifications;
- (id)animationData;
- (void)_setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_startAnimatingPlacement:(BOOL)a0;
- (void)_finishVisibilityAnimation:(float)a0;
- (void)_updateVisibilityAnimationWithProgress:(float)a0;
- (void)_auxiliaryViewFrameChanged:(id)a0;
- (void)_updateAccessorySizeIfNeeded;

@end
