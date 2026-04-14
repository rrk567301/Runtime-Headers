@class NSString, NSMapTable;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_delegegatesByCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setDelegate:(id)a0 forCache:(id)a1;
+ (void)removeDelegateForCache:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)setDelegate:(id)a0 forCache:(id)a1;
- (void)removeDelegateForCache:(id)a0;

@end
