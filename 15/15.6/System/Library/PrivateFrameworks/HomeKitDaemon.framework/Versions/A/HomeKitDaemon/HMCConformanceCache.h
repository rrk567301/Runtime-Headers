@class NSSet, NSMapTable;

@interface HMCConformanceCache : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_protocols;
    NSMapTable *_conformanceCache;
}

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (char)objectConforms:(id)a0;
- (char)classConforms:(Class)a0;
- (id)initWithProtocols:(id)a0;
- (void)refreshConformanceOf:(Class)a0;

@end
