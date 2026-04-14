@interface _CFPasteboardClientConnectionContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFArray { } *_cleanupBlocks;
}

- (id)init;
- (void)addCleanupBlock:(id /* block */)a0;
- (void)cleanup;
- (void)dealloc;

@end
