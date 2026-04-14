@class NSWindow;

@interface NSWindowScaleAnimation : NSAnimation

@property (retain) NSWindow *window;
@property double startScale;
@property double endScale;
@property long long tag;

- (void)startAnimation;
- (void)dealloc;
- (void)setCurrentProgress:(float)a0;
- (id)_displayLinkProvider;

@end
