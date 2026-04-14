@class NSMutableArray;

@interface CKRecordZoneGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sortedZones;
}

+ (id)topologicallySortRecordZones:(id)a0 withError:(id *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)addRecordZones:(id)a0 error:(id *)a1;
- (id)recordZonesByTopologicalSortWithError:(id *)a0;

@end
