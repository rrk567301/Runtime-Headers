@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
    NSMutableDictionary *mAnimations;
}

+ (id)sharedManager;
+ (void)initialize;
+ (void)loadAnimationManagerWithPaths:(id)a0;

- (void)cleanup;
- (void)dealloc;
- (id)initWithPaths:(id)a0;

@end
