@class CSReusableBufferPoolConfiguration, NSMutableArray;

@interface CSReusableBufferPool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _numberOfBackingStores;
    NSMutableArray *_recycledBackingStores;
}

@property (readonly, nonatomic) CSReusableBufferPoolConfiguration *configuration;

- (id)dataWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)cleanup;
- (id)initWithConfiguration:(id)a0;
- (void)handleUsedBackingStore:(id)a0;
- (id)_getAvailableBackingStore;
- (id)_createNewBackingStore;
- (BOOL)_canCreateNewBackingStore;
- (void)_recycleUsedBackingStore:(id)a0;
- (void)_checkIdleBackingStores;

@end
