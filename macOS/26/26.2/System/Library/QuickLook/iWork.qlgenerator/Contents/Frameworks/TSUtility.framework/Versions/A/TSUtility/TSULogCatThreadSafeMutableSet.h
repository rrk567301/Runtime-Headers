@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)initWithArray:(id)a0;
- (unsigned long long)count;
- (id)immutableSet;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (void)removeObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)description;
- (id)init;

@end
