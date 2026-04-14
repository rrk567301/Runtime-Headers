@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _totalSize;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flush;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)resetBitMask;
- (void)markWritten:(unsigned long long)a0;
- (void *)shmem;
- (void)flushLocally;
- (void)flushWithTransaction;
- (void *)_renderShmem;
- (void)_setLocalContextId:(unsigned int)a0;

@end
