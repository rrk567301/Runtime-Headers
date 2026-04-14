@class NSMutableSet;

@interface SOSystemBehaviorManager : NSObject {
    NSMutableSet *_registeredTimers;
}

+ (id)sharedSOSystemBehaviorManager;

- (void)addTimer:(id)a0;
- (void)removeTimer:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_numberObjectFromTimer:(id)a0;

@end
