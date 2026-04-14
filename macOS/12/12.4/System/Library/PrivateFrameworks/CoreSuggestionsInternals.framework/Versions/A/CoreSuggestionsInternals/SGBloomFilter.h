@class NSObject;
@protocol OS_dispatch_queue, SGBloomFilterChunk;

@interface SGBloomFilter : NSObject {
    id<SGBloomFilterChunk> _head;
    id<SGBloomFilterChunk> _tail;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)add:(id)a0;
- (id)counts;
- (id)initWithHead:(id)a0 tail:(id)a1;
- (void)_rotate;
- (void)_rotateIfNecessary;
- (BOOL)exists:(id)a0;
- (id)initWithInMemoryStorage;
- (id)initWithInMemoryStorageSparse;
- (id)initWithDirectory:(id)a0 name:(id)a1;
- (void)forceRotate;
- (void)addAsync:(id)a0;

@end
