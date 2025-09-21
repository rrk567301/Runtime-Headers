@class NSString, NSObject;
@protocol OS_dispatch_queue, NUPurgeableStorage;

@interface _NUImageTile : NSObject <NUSharableImage> {
    NSObject<OS_dispatch_queue> *_queue;
    id<NUPurgeableStorage> _storage;
    unsigned long long _accessCount;
    char _wasPurged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)isValid;
- (void).cxx_destruct;
- (char)isInUse;
- (char)isShared;
- (id)initWithStorage:(id)a0;
- (char)decrementUseCount;
- (void)incrementUseCount;
- (int)useCount;
- (char)incrementAccessCount;
- (char)_decrementAccessCount;
- (char)_incrementAccessCount;
- (void)_markAsPurgeable;
- (char)_markAsUnpurgeable;
- (void)_visitRead:(id /* block */)a0;
- (unsigned long long)accessCount;
- (long long)copyFromTile:(id)a0 region:(id)a1;
- (char)decrementAccessCount;
- (void)decrementAccessCountButLeaveAccessedIfLastUse;
- (long long)readStorageInRegion:(id)a0 block:(id /* block */)a1;
- (void)returnToStorageFactory:(id)a0;
- (long long)writeStorageInRegion:(id)a0 block:(id /* block */)a1;

@end
