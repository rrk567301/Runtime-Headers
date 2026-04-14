@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)resetHSTSHostsSinceDate:(id)a0;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0 isPreload:(BOOL *)a1;
- (void)dealloc;
- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (void)resetHSTSForHost:(id)a0;
- (id)initInMemoryStore;
- (id)nonPreloadedHosts;
- (id)initPersistentStoreWithURL:(id)a0;

@end
