@class NSString, NSTitlebarSeparatorView, NSDictionary, NSClipView;

@interface NSTitlebarAccessoryViewController : NSViewController <NSAnimationDelegate, NSAnimatablePropertyContainer> {
    double _fullScreenMinHeight;
    NSClipView *_containingClipView;
    NSTitlebarSeparatorView *_separatorView;
    double _revealAmount;
    char _allowsAutomaticSeparator;
    char _automaticallyAdjustsSize;
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
@property char inFullScreen;
@property char isToolbarAccessoryView;
@property (readonly) NSClipView *containingClipView;
@property (readonly) NSTitlebarSeparatorView *separatorView;
@property (readonly) double visibleAmount;
@property char allowsAutomaticSeparator;
@property char prefersDefaultSize;
@property long long layoutAttribute;
@property double fullScreenMinHeight;
@property (getter=isHidden) char hidden;
@property char automaticallyAdjustsSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDictionary *animations;

+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (Class)_animatorClass;
- (void)_auxiliaryViewFrameChanged:(id)a0;
- (void)_beginUpdates;
- (unsigned long long)_clipViewAutoresizingMask;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentClipViewFrame;
- (void)_endUpdates;
- (void)_finishVisibilityAnimation:(float)a0;
- (id)_makeFloatingTrailingWidget;
- (void)_registerForFrameChangedNotifications;
- (void)_setHidden:(char)a0 animated:(char)a1;
- (void)_setUpdatingFrame:(char)a0;
- (void)_startAnimatingPlacement:(char)a0;
- (void)_unregisterForFrameChangeNotifications;
- (void)_updateAccessorySizeIfNeeded;
- (void)_updateClipViewFrame;
- (void)_updateSeparatorViewFrame;
- (void)_updateVisibilityAnimationWithProgress:(float)a0;
- (unsigned long long)_viewAutoresizingMask;
- (char)_viewControllerSupports10_10Features;
- (id)animationData;
- (id)animationForKey:(id)a0;
- (id)animator;
- (void)recalculateKeyViewLoop;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
