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
- (void)cancelPreviousCompletionBlock;
- (void)_deferAnimationConfiguration;
- (void)_validateTransitionParameters;
- (id)_buildCUIOptions;
- (id)_resolvedButtonAppearance;
- (struct __CFString { } *)_cuiSizeValue;
- (BOOL)_showPlaceholderLayer;
- (void)_deferredConfigureTriggered;
- (void)_configureCurrentAnimation;
- (void)animateFromOldState:(long long)a0 oldHighlight:(BOOL)a1;
- (BOOL)startPendingAnimationWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)shortCircuitDeferredAnimationConfigurationIfNeeded;

@end
