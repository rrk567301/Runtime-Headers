@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForScheduledFetch;
+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForRolloutId:(id)a0;
+ (id)groupForExperimentId:(id)a0;
+ (id)groupForUserInitiatedFetch;

@end
