@interface HDCloudSyncStateUpdater : NSObject

+ (char)persistDataWithStateStore:(id)a0 delegate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)updateDataWithStateStore:(id)a0 delegate:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;

- (id)init;

@end
