@class NSArray, NSMapTable;

@interface NSViewAnimation : NSAnimation {
    NSArray *_viewAnimations;
    NSMapTable *_viewAnimationInfo;
    NSMapTable *_windowAnimationInfo;
}

@property (copy) NSArray *viewAnimations;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCurrentProgress:(float)a0;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)_screen;
- (void)_startAnimation;
- (id)initWithViewAnimations:(id)a0;
- (void)_freeViewAnimationInfo;
- (void)_setupAnimationInfo;
- (void)_clearAnimationInfo;

@end
