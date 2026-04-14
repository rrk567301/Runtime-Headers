@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForExperimentId:(id)a0;
+ (id)groupForRolloutId:(id)a0;
+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForScheduledFetch;
+ (id)groupForUserInitiatedFetch;

@end
