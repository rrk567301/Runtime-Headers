@class NSString, NSMutableDictionary;
@protocol LUI2WindowDelegate;

@interface LUI2Window : NSWindow <CAAnimationDelegate> {
    char _isSecondary;
    NSMutableDictionary *_animationCompletions;
}

@property (weak) id<LUI2WindowDelegate> delegate;
@property char isSecondary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_adjustWindowToScreen;
- (void)_commonInit;
- (id)accessibilityIdentifier;
- (id)accessibilityTitle;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3 screen:(id)a4;
- (void)sendEvent:(id)a0;
- (id)companionWindow;
- (void)_addCompletion:(id /* block */)a0 forKey:(id)a1;
- (id)_initWithScreen:(id)a0 secondary:(char)a1;
- (void)_performCompletion:(id /* block */)a0;
- (void)_performCompletionForKey:(id)a0;
- (void)fenceWithCompletion:(id /* block */)a0;
- (void)hideWindow:(char)a0 completion:(id /* block */)a1;
- (char)isCompanionWindow;
- (void)setUsesCompanionWindow:(char)a0;
- (void)showWindow:(char)a0 makeKey:(char)a1 completion:(id /* block */)a2;
- (char)usesCompanionWindow;

@end
