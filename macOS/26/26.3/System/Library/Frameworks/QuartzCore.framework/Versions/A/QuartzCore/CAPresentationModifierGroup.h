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

- (void *)_renderShmem;
- (void)resetBitMask;
- (void)flushLocally;
- (void)flushLocallyWithTargetTime:(double)a0;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)shmem;
- (void)flushWithTransaction;
- (void)markWritten:(unsigned long long)a0;
- (void)dealloc;
- (void)flushWithTransactionAndTargetTime:(double)a0;
- (void)flushWithTargetTime:(double)a0;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)_setLocalContextId:(unsigned int)a0;

@end
