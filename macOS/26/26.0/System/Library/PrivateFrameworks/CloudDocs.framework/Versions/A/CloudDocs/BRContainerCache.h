@class br_pacer, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol BRContainerHelper, OS_dispatch_source, OS_dispatch_queue, NSObject;

@interface BRContainerCache : NSObject {
    NSString *_personaID;
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
}

+ (id)containerHelper;
+ (BOOL)isManagedProvider;
+ (id)containerCache;
+ (BOOL)hasDaemonicParts;
+ (BOOL)isPersonalProvider;
+ (id)containerCacheForPersonaID:(id)a0;

- (void)dealloc;
- (id)documentContainers;
- (void)_accountWillChange;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (void)_containerListDidChange;
- (BOOL)_updateContainersCache;
- (id)allContainersByID;
- (id)containerByID:(id)a0;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (void)invalidateAndClearCache:(BOOL)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
