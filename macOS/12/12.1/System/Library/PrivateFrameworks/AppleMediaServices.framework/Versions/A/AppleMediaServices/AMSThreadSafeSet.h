@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeSet : NSObject

@property (retain) NSMutableSet *backingSet;
@property (retain) NSObject<OS_dispatch_queue> *backingSetAccessQueue;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;

- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void).cxx_destruct;

@end
