@class NSString, NSMutableDictionary;

@interface DDSCache : NSObject <DDSCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (id)objectForKey:(id)a0;
- (void)removeEntriesWithPrefixKey:(id)a0;
- (id)init;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
