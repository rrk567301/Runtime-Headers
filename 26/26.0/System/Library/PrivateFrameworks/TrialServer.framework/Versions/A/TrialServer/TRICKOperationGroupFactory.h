@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForExperimentId:(id)a0;
+ (id)groupForScheduledFetch;
+ (id)groupForRolloutId:(id)a0;
+ (id)groupForUserInitiatedFetch;
+ (id)groupForDownloadOptions:(id)a0;

@end
