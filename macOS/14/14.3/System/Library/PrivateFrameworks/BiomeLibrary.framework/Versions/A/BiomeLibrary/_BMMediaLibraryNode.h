@interface _BMMediaLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)NowPlaying;
+ (id)StreamingStats;
+ (id)storeConfigurationForNowPlaying;
+ (id)configurationForNowPlaying;
+ (id)configurationForStreamingStats;
+ (id)storeConfigurationForStreamingStats;
+ (id)syncPolicyForNowPlaying;
+ (id)syncPolicyForStreamingStats;

@end
