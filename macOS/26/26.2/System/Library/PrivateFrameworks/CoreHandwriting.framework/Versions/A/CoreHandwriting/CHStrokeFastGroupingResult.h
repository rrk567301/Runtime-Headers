@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult

@property (readonly, nonatomic) struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *__begin_; struct CHFastGroupingCluster *__end_; struct { struct CHFastGroupingCluster *__cap_; } ; } fastGroupingClusters;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFastGroupingClusters:(const void *)a0 clusteredStrokes:(id)a1 strokeProvider:(id)a2 strategyIdentifier:(id)a3 clutterFilter:(id)a4;

@end
