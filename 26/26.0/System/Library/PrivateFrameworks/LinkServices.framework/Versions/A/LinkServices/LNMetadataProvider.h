@class NSString, NSXPCConnection;
@protocol LNMetadataProviderInterface;

@interface LNMetadataProvider : NSObject <LNMetadataProviderInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _options;
    id<LNMetadataProviderInterface> _xpcProvider;
    id<LNMetadataProviderInterface> _directProvider;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entitiesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)examplePhrasesForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)registerBundleWithIdentifier:(id)a0 error:(id *)a1;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)entitiesWithError:(id *)a0;
- (void)unregisterBundleWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (BOOL)enumerateEntitiesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (void)scanBundlesWithReply:(id /* block */)a0;
- (void)dealloc;
- (id)initWithOptions:(long long)a0;
- (id)entityIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enumerateEnumsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateQueriesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)openCollectionActionsForEntityTypeIdentifier:(id)a0 capabilities:(long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)queriesWithError:(id *)a0;
- (id)init;
- (BOOL)enumerateActionsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)entityForBundleIdentifier:(id)a0 withEntityIdentifier:(id)a1 error:(id *)a2;
- (id)enumsWithError:(id *)a0;
- (id)queryForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)resetWithReply:(id /* block */)a0;
- (id)queriesWithCapabilities:(unsigned long long)a0 inputValueType:(id)a1 resultValueType:(id)a2 error:(id *)a3;
- (id)openActionsForTypeIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)queriesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)bundlesWithError:(id *)a0;
- (id)enumsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)bundleRegistrationsWithError:(id *)a0;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (void)registerBundleWithIdentifier:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (void)diagnoseBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)actionsWithError:(id *)a0;
- (id)suggestionPhrasesForQueries:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;

@end
