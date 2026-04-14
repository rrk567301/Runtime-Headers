@class NSMutableDictionary;

@interface _CHSDynamicColorCache : NSObject <CHSDynamicColorCache> {
    NSMutableDictionary *_lock_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) _CHSDynamicColorCache *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cachedObjectForObject:(id)a0;

@end
