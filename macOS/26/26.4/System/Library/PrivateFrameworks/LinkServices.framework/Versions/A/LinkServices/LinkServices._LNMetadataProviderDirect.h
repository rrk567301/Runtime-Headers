@class NSString, NSError;

@interface LinkServices._LNMetadataProviderDirect : NSObject <LNAutoShortcutsProviderInterface, LNMetadataProviderInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ requiresAssertion;
}

- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)enumsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)entitiesWithError:(id *)a0;
- (id)suggestionPhrasesForQueries:(id)a0 error:(id *)a1;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enumerateQueriesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void)diagnoseBundleIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)openCollectionActionsForEntityTypeIdentifier:(id)a0 capabilities:(long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queriesWithError:(id *)a0;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)bundleRegistrationsWithError:(id *)a0;
- (id)entitiesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)queriesForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)actionsForSchemaIdentifier:(id)a0 error:(id *)a1;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enumerateActionsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)queriesWithCapabilities:(unsigned long long)a0 inputValueType:(id)a1 resultValueType:(id)a2 error:(id *)a3;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)init;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)openActionsForTypeIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)actionsWithError:(id *)a0;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)entityIdentifiersForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enumerateEntitiesForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)examplePhrasesForBundleIdentifier:(id)a0 error:(id *)a1;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)propertiesForIdentifiers:(id)a0 error:(id *)a1;
- (id)entityForBundleIdentifier:(id)a0 withEntityIdentifier:(id)a1 error:(id *)a2;
- (id)queryForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)bundlesWithError:(id *)a0;
- (id)enumsWithError:(id *)a0;
- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)enumerateEnumsForBundleIdentifier:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)initWithConnection:(id)a0 options:(long long)a1 error:(id *)a2;

@end
