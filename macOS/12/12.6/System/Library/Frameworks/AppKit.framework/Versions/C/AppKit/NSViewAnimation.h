@class NSArray, NSMapTable;

@interface NSViewAnimation : NSAnimation {
    NSArray *_viewAnimations;
    NSMapTable *_viewAnimationInfo;
    NSMapTable *_windowAnimationInfo;
}

@property (copy) NSArray *viewAnimations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCurrentProgress:(float)a0;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)_startAnimation;
- (id)_screen;
- (id)initWithViewAnimations:(id)a0;
- (void)_clearAnimationInfo;
- (void)_setupAnimationInfo;
- (void)_freeViewAnimationInfo;

@end
