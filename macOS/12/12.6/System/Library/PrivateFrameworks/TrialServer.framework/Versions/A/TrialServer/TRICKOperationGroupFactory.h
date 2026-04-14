@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForExperimentId:(id)a0;
+ (id)groupForRolloutId:(id)a0;
+ (id)groupForScheduledFetch;
+ (id)groupForUserInitiatedFetch;

@end
