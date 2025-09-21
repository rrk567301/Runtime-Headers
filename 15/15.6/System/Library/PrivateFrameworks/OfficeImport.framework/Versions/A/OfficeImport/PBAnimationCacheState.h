@class NSMutableSet;

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (id)init;
- (void).cxx_destruct;
- (char)isValid:(id)a0;

@end
