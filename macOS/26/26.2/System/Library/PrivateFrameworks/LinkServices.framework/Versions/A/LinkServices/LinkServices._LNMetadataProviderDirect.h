@class NSString, NSError;

@interface LinkServices._LNMetadataProviderDirect : NSObject <LNAutoShortcutsProviderInterface, LNMetadataProviderInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ requiresAssertion;
}

- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queryForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)entitiesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)actionsWithError:(id *)a0;
- (BOOL)enumerateEnumsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateQueriesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)propertiesForIdentifiers:(id)a0 error:(id *)a1;
- (id)queriesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)openActionsForTypeIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)actionsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)entityForBundleIdentifier:(id)a0 withEntityIdentifier:(id)a1 error:(id *)a2;
- (id)enumsWithError:(id *)a0;
- (BOOL)enumerateEntitiesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateActionsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)enumsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)queriesWithCapabilities:(unsigned long long)a0 inputValueType:(id)a1 resultValueType:(id)a2 error:(id *)a3;
- (id)bundleRegistrationsWithError:(id *)a0;
- (id)queriesWithError:(id *)a0;
- (id)entitiesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)entityIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)examplePhrasesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)bundlesWithError:(id *)a0;
- (void)diagnoseBundleIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (id)init;
- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)suggestionPhrasesForQueries:(id)a0 error:(id *)a1;
- (id)openCollectionActionsForEntityTypeIdentifier:(id)a0 capabilities:(long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)initWithConnection:(id)a0 options:(long long)a1 error:(id *)a2;

@end
