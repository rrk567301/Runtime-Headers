@class NSArray;

@interface NSDocumentRevisionsWindowTransformAnimationGroup : NSAnimation {
    NSArray *_animations;
    BOOL _resizesWindow;
}

@property (copy) id /* block */ completionHandler;

- (id)initWithAnimations:(id)a0;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)_displayLinkProvider;

@end
