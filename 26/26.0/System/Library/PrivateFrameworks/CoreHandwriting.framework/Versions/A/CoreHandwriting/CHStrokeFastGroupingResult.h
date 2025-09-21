@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult

@property (readonly, nonatomic) struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *__begin_; struct CHFastGroupingCluster *__end_; struct CHFastGroupingCluster *__cap_; } fastGroupingClusters;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFastGroupingClusters:(const void *)a0 clusteredStrokes:(id)a1 strokeProvider:(id)a2 strategyIdentifier:(id)a3 clutterFilter:(id)a4;

@end
