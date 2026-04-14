@class NSMutableSet;

@interface SOSystemBehaviorManager : NSObject {
    NSMutableSet *_registeredTimers;
}

+ (id)sharedSOSystemBehaviorManager;

- (id)init;
- (void)removeTimer:(id)a0;
- (void)dealloc;
- (void)addTimer:(id)a0;
- (id)_numberObjectFromTimer:(id)a0;

@end
