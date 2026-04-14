@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (id)nonPreloadedHosts;
- (void)resetHSTSForHost:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (id)initInMemoryStore;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0 isPreload:(BOOL *)a1;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (id)initPersistentStoreWithURL:(id)a0;
- (void)dealloc;

@end
