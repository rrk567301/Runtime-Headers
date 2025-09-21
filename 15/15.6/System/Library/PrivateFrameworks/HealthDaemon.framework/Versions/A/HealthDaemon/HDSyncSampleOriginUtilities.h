@interface HDSyncSampleOriginUtilities : NSObject

+ (char)generateStateSyncCodableContributors:(id *)a0 predicate:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (char)generateStateSyncCodableDevices:(id *)a0 predicate:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (long long)ingestContributorSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)ingestSourceSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;

@end
