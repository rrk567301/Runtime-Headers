@interface CNAssistantCache : NSObject

+ (id)cachePath;
+ (BOOL)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (BOOL)removeUpdatesForAssistantUrl:(id)a0;
+ (BOOL)removeAllUpdates;
+ (id)updatesForAssistantUrl:(id)a0;
+ (id)cacheDictionary;
+ (BOOL)saveCache:(id)a0;

@end
