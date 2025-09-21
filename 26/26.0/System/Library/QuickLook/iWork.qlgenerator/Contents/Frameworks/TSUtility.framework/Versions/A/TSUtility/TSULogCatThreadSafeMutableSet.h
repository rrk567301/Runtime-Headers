@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (void)removeObject:(id)a0;
- (id)immutableSet;
- (unsigned long long)count;
- (id)init;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)description;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
