@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flush;
- (void *)_renderShmem;
- (void)resetBitMask;
- (void)flushLocally;
- (unsigned long long)nextSlot;
- (void)markWritten:(unsigned long long)a0;
- (void *)shmem;
- (void)flushWithTransaction;
- (void)_setLocalContextId:(unsigned int)a0;

@end
