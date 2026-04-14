@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
    NSMutableDictionary *mAnimations;
    NSMutableDictionary *mAnimationSets;
}

+ (id)sharedManager;
+ (void)releaseSharedManager;
+ (void)loadAnimationManagerWithPaths:(id)a0;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (id)animationDescriptionForAnimationSetID:(id)a0;
- (id)animationDescriptionForAnimationID:(id)a0;

@end
