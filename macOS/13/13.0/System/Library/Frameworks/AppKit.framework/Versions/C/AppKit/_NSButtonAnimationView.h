@class NSView, NSButtonCell, CAContext, NSValue;

@interface _NSButtonAnimationView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cellFrame;
    long long _fromState;
    long long _fromHighlighted;
    long long _toState;
    long long _toHighlighted;
    CAContext *_webKitContext;
    long long _status;
    id /* block */ _cancellationBlock;
    struct __CFRunLoopObserver { } *_runloopObserver;
    NSValue *_controlViewStorage;
    NSValue *_buttonCellStorage;
    BOOL _currentlyAddingSubview;
}

@property (readonly) long long status;
@property (weak) NSView *controlView;
@property (weak) NSButtonCell *buttonCell;

- (void)dealloc;
- (void)terminate;
- (void)viewDidChangeEffectiveAppearance;
- (id)_coreUIWidgetName;
- (id)initWithCell:(id)a0;
- (void)animateFromOldState:(long long)a0 oldHighlight:(BOOL)a1;
- (void)_configureCurrentAnimation;
- (BOOL)_showPlaceholderLayer;
- (id)_buildCUIOptions;
- (void)_validateTransitionParameters;
- (void)cancelPreviousCompletionBlock;
- (struct __CFString { } *)_cuiSizeValue;
- (id)_resolvedButtonAppearance;
- (BOOL)startPendingAnimationWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_deferAnimationConfiguration;
- (void)_deferredConfigureTriggered;
- (void)shortCircuitDeferredAnimationConfigurationIfNeeded;

@end
