@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForExperimentId:(id)a0;
+ (id)groupForUserInitiatedFetch;
+ (id)groupForScheduledFetch;
+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForRolloutId:(id)a0;

@end
