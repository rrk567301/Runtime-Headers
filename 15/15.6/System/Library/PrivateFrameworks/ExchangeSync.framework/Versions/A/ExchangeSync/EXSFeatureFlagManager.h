@interface EXSFeatureFlagManager : NSObject

+ (char)graphSyncEnabled;
+ (char)contactsSyncEnabled;
+ (char)notesSyncEnabled;
+ (char)sandboxingEnabled;

@end
