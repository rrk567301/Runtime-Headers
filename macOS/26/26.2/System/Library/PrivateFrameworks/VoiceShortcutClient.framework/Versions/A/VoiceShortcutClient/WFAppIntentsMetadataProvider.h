@class LNMetadataProvider;

@interface WFAppIntentsMetadataProvider : NSObject {
    void /* unknown type, empty encoding */ actionsCache;
    void /* unknown type, empty encoding */ queriesCache;
    void /* unknown type, empty encoding */ entitiesCache;
    void /* unknown type, empty encoding */ enumerationsCache;
    void /* unknown type, empty encoding */ examplePhrasesCache;
    void /* unknown type, empty encoding */ cacheActivityTransaction;
    void /* unknown type, empty encoding */ cachePurgeDebouncer;
    void /* unknown type, empty encoding */ cachePurgeDispatchQueue;
    void /* unknown type, empty encoding */ cachePurgeDispatchSource;
    void /* unknown type, empty encoding */ cachePurgeNotificationObserver;
}

@property (nonatomic, readonly) LNMetadataProvider *metadataProvider;

+ (id)sharedProvider;
+ (id)daemonProvider;

- (id)entities;
- (void)invalidate;
- (void)purge;
- (id)actions;
- (id)queries;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)enumerations;
- (id)actionWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)actionsForBundleIdentifier:(id)a0;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0;
- (id)allActionsIfAvailable;
- (id)allEntitiesIfAvailable;
- (void)cacheDebouncerFire;
- (void)cacheDebouncerPoke;
- (id)defaultQueryForEntityIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)entitiesForBundleIdentifier:(id)a0;
- (id)entityWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)enumerationWithIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (id)enumerationsForBundleIdentifier:(id)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0;
- (id)examplePhrasesForBundleIdentifier:(id)a0 useCache:(BOOL)a1;
- (id)initWithMetadataProvider:(id)a0;
- (id)initWithMetadataProvider:(id)a0 cacheLifetime:(double)a1;
- (id)queriesForBundleIdentifier:(id)a0;
- (id)queryWithQueryIdentifier:(id)a0 fromBundleIdentifier:(id)a1;

@end
