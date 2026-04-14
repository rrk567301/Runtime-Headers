@class br_pacer, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol BRContainerHelper, OS_dispatch_source, OS_dispatch_queue, NSObject;

@interface BRContainerCache : NSObject {
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
    NSString *_personaID;
}

+ (BOOL)isPersonalProvider;
+ (BOOL)isManagedProvider;
+ (BOOL)hasDaemonicParts;
+ (id)containerCache;
+ (id)containerCacheForPersonaID:(id)a0;
+ (id)containerHelper;

- (void)dealloc;
- (void).cxx_destruct;
- (id)documentContainers;
- (id)containerByID:(id)a0;
- (id)allContainersByID;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)invalidateAndClearCache:(BOOL)a0;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (void)_accountWillChange;
- (BOOL)_updateContainersCache;

@end
