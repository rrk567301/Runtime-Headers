@class NSRecursiveLock, NSMutableSet, NSObject, NSLock;
@protocol SSInputEventConsumer;

@interface SSInputEventSourceCoordinator : NSObject {
    NSObject<SSInputEventConsumer> *mActiveConsumer;
    NSMutableSet *mEventSources;
    NSMutableSet *mRegisteredConsumers;
    NSLock *mLock;
}

@property (retain) NSRecursiveLock *activeConsumerLock;
@property NSObject<SSInputEventConsumer> *activeConsumer;

+ (id)sharedCoordinator;

- (void)unregisterConsumer:(id)a0;
- (void)removeSource:(id)a0;
- (void)addSource:(id)a0;
- (id)init;
- (void)dealloc;
- (void)registerConsumer:(id)a0;
- (void)deactivateConsumer:(id)a0;

@end
