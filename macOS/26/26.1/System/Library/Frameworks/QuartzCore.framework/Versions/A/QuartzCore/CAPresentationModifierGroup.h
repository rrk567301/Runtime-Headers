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

- (void)_setLocalContextId:(unsigned int)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flush;
- (void)flushWithTransaction;
- (void)flushWithTargetTime:(double)a0;
- (void *)_renderShmem;
- (void *)shmem;
- (void)flushLocally;
- (void)dealloc;
- (void)flushLocallyWithTargetTime:(double)a0;
- (void)flushWithTransactionAndTargetTime:(double)a0;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)markWritten:(unsigned long long)a0;
- (void)resetBitMask;

@end
