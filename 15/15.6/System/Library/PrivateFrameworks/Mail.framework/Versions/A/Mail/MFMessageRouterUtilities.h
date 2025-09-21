@interface MFMessageRouterUtilities : NSObject

+ (id)syncedRulesPath;
+ (void)resetShouldSpotlightIndexJunkLevel;
+ (id)rulesActiveStatePath;
+ (char)shouldSpotlightIndexJunkLevel;
+ (id)sortRulesPath;
+ (id)syncedRulesRelativePath;
+ (id)unsyncedRulesPath;

@end
