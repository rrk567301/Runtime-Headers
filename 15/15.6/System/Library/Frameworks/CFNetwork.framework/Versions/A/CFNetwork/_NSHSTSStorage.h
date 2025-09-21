@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)dealloc;
- (void)handleSTSHeader:(id)a0 forURL:(id)a1;
- (id)initInMemoryStore;
- (id)initPersistentStoreWithURL:(id)a0;
- (id)nonPreloadedHosts;
- (void)resetHSTSForHost:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;
- (char)shouldPromoteHostToHTTPS:(id)a0;
- (char)shouldPromoteHostToHTTPS:(id)a0 isPreload:(char *)a1;

@end
