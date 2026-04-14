@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetChangeQueue : NSObject {
    NSMutableSet *_setChanges;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)groupSetsByPersonaIdentifier:(id)a0 enumerateGroupsUsingBlock:(id /* block */)a1;

- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeueAll;

@end
