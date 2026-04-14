@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
    NSMutableDictionary *mAnimations;
}

+ (void)initialize;
+ (id)sharedManager;
+ (void)loadAnimationManagerWithPaths:(id)a0;

- (void)cleanup;
- (void)dealloc;
- (id)initWithPaths:(id)a0;

@end
