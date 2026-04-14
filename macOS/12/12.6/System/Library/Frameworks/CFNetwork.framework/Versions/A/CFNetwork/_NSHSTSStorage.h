@class NSURL;

@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } *_policy;
}

@property (readonly) struct _CFHSTSPolicy { } *_policyRef;
@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (void)dealloc;
- (id)initPersistentStoreWithURL:(id)a0;
- (id)initInMemoryStore;
- (BOOL)shouldPromoteHostToHTTPS:(id)a0;
- (id)nonPreloadedHosts;
- (void)resetHSTSForHost:(id)a0;
- (void)resetHSTSHostsSinceDate:(id)a0;

@end
