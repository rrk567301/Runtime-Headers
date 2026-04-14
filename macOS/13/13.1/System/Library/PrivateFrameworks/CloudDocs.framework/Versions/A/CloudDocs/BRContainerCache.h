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

+ (id)containerHelper;
+ (id)containerCacheForPersonaID:(id)a0;
+ (id)containerCache;
+ (BOOL)hasDaemonicParts;
+ (BOOL)isPersonalProvider;
+ (BOOL)isManagedProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (id)documentContainers;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (void)_accountWillChange;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (id)allContainersByID;
- (id)containerByID:(id)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;
- (void)_containerListDidChange;
- (void)invalidateAndClearCache:(BOOL)a0;
- (BOOL)_updateContainersCache;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;

@end
