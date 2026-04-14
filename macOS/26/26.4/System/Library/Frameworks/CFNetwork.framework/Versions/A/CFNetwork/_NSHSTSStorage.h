@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (void)resetHSTSForHost:(id)a0;
- (id)initPersistentStoreWithURL:(id)a0;
- (id)initInMemoryStore;
- (id)nonPreloadedHosts;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0 isPreload:(BOOL *)a1;
- (void)dealloc;

@end
