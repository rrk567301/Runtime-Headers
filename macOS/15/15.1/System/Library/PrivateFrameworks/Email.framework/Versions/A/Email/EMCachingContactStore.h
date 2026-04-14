@class NSSet, EFLazyCache, CNContactStore;
@protocol EFScheduler;

@interface EMCachingContactStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _emailAddressCacheLock;
}

@property (retain, nonatomic) EFLazyCache *displayNameCache;
@property (retain, nonatomic) NSSet *emailAddressCache;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) id<EFScheduler> addressCacheScheduler;
@property (readonly, nonatomic) CNContactStore *cnStore;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)contactExistsForEmailAddress:(id)a0;
- (id)initWithStore:(id)a0 options:(unsigned long long)a1;
- (id)_fetchDisplayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (void)_invalidateDisplayNameCache;
- (void)_invalidateEmailAddressCache;
- (void)_scheduleEmailAddressCachePopulation;
- (id)contactFutureForCachedEmailAddressOnScheduler:(id)a0 forEmailAddress:(id)a1 keysToFetch:(id)a2;
- (id)displayNameForEmailAddress:(id)a0;
- (id)displayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;

@end
