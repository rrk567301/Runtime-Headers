@interface PPTemporalClusterStore : NSObject

- (id)init;
- (char)iterRankedTemporalClustersForStartDate:(id)a0 endDate:(id)a1 error:(id *)a2 block:(id /* block */)a3;

@end
