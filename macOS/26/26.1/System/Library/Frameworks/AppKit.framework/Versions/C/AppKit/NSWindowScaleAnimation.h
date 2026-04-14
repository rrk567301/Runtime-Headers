@class NSWindow;

@interface NSWindowScaleAnimation : NSAnimation

@property (retain) NSWindow *window;
@property double startScale;
@property double endScale;
@property long long tag;

- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)dealloc;
- (id)_displayLinkProvider;

@end
