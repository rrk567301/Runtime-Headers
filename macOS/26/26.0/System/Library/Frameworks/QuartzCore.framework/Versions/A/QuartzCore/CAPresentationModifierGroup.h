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

- (void)flushLocally;
- (void)_setLocalContextId:(unsigned int)a0;
- (void)dealloc;
- (void)markWritten:(unsigned long long)a0;
- (void)flushLocallyWithTargetTime:(double)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flushWithTargetTime:(double)a0;
- (void)flush;
- (void *)_renderShmem;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)resetBitMask;
- (void)flushWithTransaction;
- (void)flushWithTransactionAndTargetTime:(double)a0;
- (void *)shmem;

@end
