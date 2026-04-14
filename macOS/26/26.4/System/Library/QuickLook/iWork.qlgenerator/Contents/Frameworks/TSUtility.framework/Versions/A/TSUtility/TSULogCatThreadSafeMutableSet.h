@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)immutableSet;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (id)description;

@end
