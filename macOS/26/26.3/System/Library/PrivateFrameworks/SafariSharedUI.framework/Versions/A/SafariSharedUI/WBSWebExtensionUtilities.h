@interface WBSWebExtensionUtilities : NSObject

+ (double)storageSizeForKeysAndValues:(id)a0;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)a0;
+ (id)serializeObjectToJSON:(id)a0;
+ (double)nextTabID;
+ (double)storageSizeForKeyOrValue:(id)a0;
+ (double)nextWindowID;
+ (BOOL)isProfileServerIDForDefaultProfile:(id)a0;

@end
