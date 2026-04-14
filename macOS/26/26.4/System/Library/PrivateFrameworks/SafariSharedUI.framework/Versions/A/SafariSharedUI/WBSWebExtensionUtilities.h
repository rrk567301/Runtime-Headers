@interface WBSWebExtensionUtilities : NSObject

+ (double)nextWindowID;
+ (id)serializeObjectToJSON:(id)a0;
+ (double)storageSizeForKeysAndValues:(id)a0;
+ (double)nextTabID;
+ (BOOL)isProfileServerIDForDefaultProfile:(id)a0;
+ (double)storageSizeForKeyOrValue:(id)a0;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)a0;

@end
