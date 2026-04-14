@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)allObjects;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)immutableSet;

@end
