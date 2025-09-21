@interface CNAssistantCache : NSObject

+ (id)cachePath;
+ (id)cacheDictionary;
+ (char)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (char)removeAllUpdates;
+ (char)removeUpdatesForAssistantUrl:(id)a0;
+ (char)saveCache:(id)a0;
+ (id)updatesForAssistantUrl:(id)a0;

@end
