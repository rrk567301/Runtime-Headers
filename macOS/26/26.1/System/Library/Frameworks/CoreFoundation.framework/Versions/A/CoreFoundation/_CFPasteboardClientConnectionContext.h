@interface _CFPasteboardClientConnectionContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFArray { } *_cleanupBlocks;
}

- (void)cleanup;
- (void)dealloc;
- (void)addCleanupBlock:(id /* block */)a0;
- (id)init;

@end
