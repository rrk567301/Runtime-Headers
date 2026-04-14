@interface MFMessageRouterUtilities : NSObject

+ (id)sortRulesPath;
+ (id)syncedRulesPath;
+ (id)syncedRulesRelativePath;
+ (id)unsyncedRulesPath;
+ (id)rulesActiveStatePath;
+ (BOOL)shouldSpotlightIndexJunkLevel;
+ (void)resetShouldSpotlightIndexJunkLevel;

@end
