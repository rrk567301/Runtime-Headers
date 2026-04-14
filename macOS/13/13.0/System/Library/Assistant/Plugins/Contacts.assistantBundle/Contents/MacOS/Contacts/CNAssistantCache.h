@interface CNAssistantCache : NSObject

+ (id)cachePath;
+ (id)cacheDictionary;
+ (BOOL)saveCache:(id)a0;
+ (BOOL)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (BOOL)removeUpdatesForAssistantUrl:(id)a0;
+ (BOOL)removeAllUpdates;
+ (id)updatesForAssistantUrl:(id)a0;

@end
