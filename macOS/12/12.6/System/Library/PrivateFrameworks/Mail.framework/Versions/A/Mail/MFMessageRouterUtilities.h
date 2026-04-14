@interface MFMessageRouterUtilities : NSObject

+ (id)syncedRulesPath;
+ (id)unsyncedRulesPath;
+ (id)rulesActiveStatePath;
+ (id)sortRulesPath;
+ (id)syncedRulesRelativePath;
+ (BOOL)shouldSpotlightIndexJunkLevel;
+ (void)resetShouldSpotlightIndexJunkLevel;

@end
