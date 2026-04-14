@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)allObjects;
- (void)removeObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)immutableSet;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (void)addObject:(id)a0;
- (id)init;

@end
