@class NSWindow;

@interface NSWindowScaleAnimation : NSAnimation

@property (retain) NSWindow *window;
@property double startScale;
@property double endScale;
@property long long tag;

- (void)dealloc;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (id)_screen;

@end
