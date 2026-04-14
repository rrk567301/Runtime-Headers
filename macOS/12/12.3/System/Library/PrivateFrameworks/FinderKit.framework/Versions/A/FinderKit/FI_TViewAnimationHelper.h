@class NSString, NSView, NSValue, NSObject;
@protocol CAAnimationDelegate;

@interface FI_TViewAnimationHelper : NSObject <CAAnimationDelegate> {
    struct TNSRef<NSView, void> { NSView *fRef; } _view;
    struct TNSWeakPtr<NSObject<CAAnimationDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
    BOOL _origWantsLayers;
}

@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) NSObject<CAAnimationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationHelperWithView:(id)a0;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)view;
- (void)setView:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)configureAnimations:(BOOL)a0;

@end
