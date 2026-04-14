@interface WBSWebExtensionUtilities : NSObject

+ (BOOL)validateContentsOfDictionary:(id)a0 requiredKeys:(id)a1 optionalKeys:(id)a2 keyToExpectedValueType:(id)a3 outExceptionString:(id *)a4;
+ (double)nextTabID;
+ (double)nextWindowID;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)a0;
+ (id)tabStateRespectingPermissionsForTab:(id)a0 webExtension:(id)a1;
+ (id)windowStateForWindow:(id)a0 webExtension:(id)a1 shouldPopulateTabs:(BOOL)a2;
+ (id)changeInfoForOnUpdatedEventRespectingPermissionsForTab:(id)a0 changedProperties:(unsigned long long)a1 webExtension:(id)a2;
+ (BOOL)isTabIDValid:(double)a0;
+ (BOOL)isWindowIDValid:(double)a0;
+ (id)serializeObjectToJSON:(id)a0;
+ (double)storageSizeForKeyOrValue:(id)a0;
+ (double)storageSizeForKeysAndValues:(id)a0;
+ (BOOL)tab:(id)a0 matchesQueryInfo:(id)a1 idOfCurrentWindow:(double)a2 webExtension:(id)a3;
+ (id)urlFromTabsCreateOrUpdatePropertiesDictionary:(id)a0 webExtension:(id)a1;

@end
