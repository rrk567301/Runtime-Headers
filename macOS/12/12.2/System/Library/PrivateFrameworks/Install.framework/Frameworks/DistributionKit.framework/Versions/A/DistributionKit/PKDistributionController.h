@class PKProduct, NSString, NSMutableDictionary, PKDistributionEvaluator, PKDistribution;

@interface PKDistributionController : NSObject {
    PKDistribution *_distribution;
    NSMutableDictionary *_choiceItemDictionary;
    NSString *_interfaceType;
    PKDistributionEvaluator *_evaluator;
    PKProduct *_product;
    NSMutableDictionary *_searchResultsByIdentifier;
}

@property BOOL isEvaluating;
@property (copy) NSString *localizedProductName;

+ (void)clearCaches;
+ (void)_setEnvironmentForDistribution:(id)a0;
+ (void)_setBackgroundEvaluation:(BOOL)a0;
+ (void)_registerPPDVersionCache:(id)a0;
+ (id)_currentPPDVersionCache;
+ (id)_evaluationQueue;
+ (id)_stringForCheckErrorCode:(int)a0;

- (void)dealloc;
- (id)_displayName;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)distribution;
- (id)product;
- (id)choiceItemForIdentifier:(id)a0;
- (id)initWithDistribution:(id)a0 interfaceType:(id)a1;
- (void)setDestinationPath:(id)a0;
- (id)orderedPackageSpecifiersToInstall;
- (id)effectiveValueForPackageAttributeName:(id)a0;
- (BOOL)resourceEnabledForKey:(id)a0;
- (id)orderedPackageReferencesToInstall;
- (id)_displayVersion;
- (void)setMetaInfo:(id)a0;
- (BOOL)performInstallationCheckReturningError:(id *)a0;
- (BOOL)performVolumeCheckWithPath:(id)a0 error:(id *)a1;
- (BOOL)performUpgradeCheckWithPath:(id)a0 error:(id *)a1;
- (void)waitUntilQuiescent;
- (id)destinationPath;
- (void)setLegacySystemVersion:(BOOL)a0;
- (id)resultsForSearchIdentifier:(id)a0;
- (void)setResults:(id)a0 forSearchIdentifier:(id)a1;
- (id)allChoiceItems;
- (id)initWithDistribution:(id)a0 interfaceType:(id)a1 notifyQueue:(id)a2;
- (void)_invalidateChoiceItemCache:(id)a0;
- (void)_evaluatorStateDidChange:(id)a0;
- (id)_IFJS_Context;
- (id)_cacheChoiceItemForChoice:(id)a0;
- (void)_cacheAllChoiceItemsIfNeeded;
- (id)allTopChoiceItems;
- (id)_packageReferencesToInstall;
- (id)componentToSearchResultMapForPkgRefIdentifier:(id)a0;
- (void)_addPackageSpecifiersFromChoiceItem:(id)a0 toMap:(id)a1 prefixPath:(id)a2 displayName:(id)a3 displayVersion:(id)a4;
- (id)_evaluatedValueForAttributeName:(id)a0 onPackageReference:(id)a1;
- (BOOL)_isDomainScriptEnabled:(id)a0;
- (void)_performAllSearches;
- (id)initWithProduct:(id)a0 interfaceType:(id)a1 notifyQueue:(id)a2;
- (void)resetWithInterfaceType:(id)a0;
- (id)choiceItems;
- (id)topChoiceItems;
- (void)restoreDefaultChoiceItemStates;
- (void)setAllowsExternalScripts:(BOOL)a0;
- (id)evaluateExpression:(id)a0 choiceItem:(id)a1 returningError:(id *)a2;
- (void)setVersionOfOSToBeInstalled:(id)a0;
- (id)versionOfOSToBeInstalled;
- (BOOL)shouldAllowInstallToDomain:(int)a0;
- (BOOL)restoreFromChoiceChangesFile:(id)a0 error:(id *)a1;
- (BOOL)writeChoiceChangesToFile:(id)a0 error:(id *)a1;
- (id)_commonCheckErrorWithCode:(int)a0 userInfo:(id)a1 destination:(id)a2 minVersion:(id)a3 minMemory:(long long)a4;
- (BOOL)_isSystemVersion:(id)a0 sameMajorVersionAs:(id)a1;
- (BOOL)_performArchitectureCheckReturningError:(id *)a0;
- (BOOL)_performRAMCheckReturningError:(id *)a0;
- (BOOL)_performHardwarePropertiesCheckReturningError:(id *)a0;
- (BOOL)_performGraphicsHardwareCheckReturningError:(id *)a0;
- (BOOL)_evaluateCheckScript:(id)a0 withPath:(id)a1 allowInsecure:(BOOL)a2 nodeIdentifier:(id)a3 returningError:(id *)a4 errorCode:(int)a5 warningCode:(int)a6;
- (BOOL)_performOSVersionCheckWithPath:(id)a0 error:(id *)a1;
- (BOOL)_performRequiredBundleCheckWithPath:(id)a0 error:(id *)a1;
- (BOOL)performPeripheralCheckReturningError:(id *)a0;
- (struct OpaqueJSContext { } *)jsContextRef;

@end
