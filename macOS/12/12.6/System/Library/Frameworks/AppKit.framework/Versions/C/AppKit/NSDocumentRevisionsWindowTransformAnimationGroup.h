@class NSArray;

@interface NSDocumentRevisionsWindowTransformAnimationGroup : NSAnimation {
    NSArray *_animations;
    BOOL _resizesWindow;
}

@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)_screen;
- (id)initWithAnimations:(id)a0;

@end
