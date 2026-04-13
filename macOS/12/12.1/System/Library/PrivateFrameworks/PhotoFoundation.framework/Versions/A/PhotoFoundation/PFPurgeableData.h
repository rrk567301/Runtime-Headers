@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PFPurgeableData : NSMutableData <PFMemoryInfo> {
    void *_bytes;
    unsigned long long _length;
    unsigned long long _capacity;
    unsigned long long _accessLevel;
    BOOL _copyAccessLevel;
    BOOL _contentsLost;
    BOOL _canCacheOnDisk;
    int _purgeLevel;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL canCacheOnDisk;
@property (readonly) unsigned long long accessCount;
@property (retain) NSString *memoryNote;
@property BOOL recycle;
@property (readonly) int purgeLevel;
@property (readonly) int purgeState;
@property (readonly) unsigned long long capacity;
@property (readonly) void *rawBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_checkVMError:(int)a0 function:(const char *)a1;
+ (id)purgeStateToString:(int)a0;
+ (id)purgeLevelToString:(int)a0;
+ (id)allInstances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0;
- (void)_checkAccess;
- (int)_purgeLevelToOSValue:(int)a0;
- (void)_logPurgeState;
- (void *)_allocateMemory:(unsigned long long)a0 newCapacity:(unsigned long long *)a1;
- (void)_deallocateMemory:(void *)a0 capacity:(unsigned long long)a1;
- (BOOL)_markBlockUnpurgeable;
- (BOOL)_restoreBlockPurgeLevel;
- (BOOL)_setBlockFIFO:(int)a0;
- (int)_OSValueToPurgeState:(int)a0;
- (BOOL)setPurgeLevel:(int)a0;
- (BOOL)resetLRUValue;
- (BOOL)beginAccess;
- (void)beginAccess:(id /* block */)a0;
- (void)endAccess;

@end
