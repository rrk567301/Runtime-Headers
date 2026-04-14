@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (id)description;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)immutableSet;

@end
