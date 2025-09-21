@class UIWindow, NSWindow;
@protocol AVCatalystWindowProxyDelegate;

@interface AVCatalystWindowProxy : NSObject <AVCatalystWindowProxy>

@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) NSWindow *proxiedWindow;
@property (nonatomic, getter=isObserving) char observing;
@property (weak, nonatomic) id<AVCatalystWindowProxyDelegate> delegate;
@property (copy, nonatomic) id /* block */ activeToggleFullScreenOverrideHandler;
@property (readonly, nonatomic) id /* block */ toggleFullScreenOverrideHandler;
@property (readonly, nonatomic, getter=isInFullscreen) char inFullscreen;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)hide;
- (void)show;
- (char)_toggleFullscreenOverride:(id)a0;
- (void)_updateActiveToggleFullScreenOverrideHandler;

@end
