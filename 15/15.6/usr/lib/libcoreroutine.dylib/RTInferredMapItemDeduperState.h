@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface RTInferredMapItemDeduperState : NSObject

@property (nonatomic) char canIngest;
@property (retain, nonatomic) NSMutableArray *uniqueInferredMapItems;
@property (retain, nonatomic) NSMutableDictionary *intermediateUUIDToInferredMapItemsMap;
@property (retain, nonatomic) NSDictionary *intermediateUUIDToInferredMapItemMap;
@property (retain, nonatomic) NSDictionary *dedupedUUIDToMapItemMap;

- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (id)allDedupedUUIDsWithError:(id *)a0;
- (id)allUniqueMapItemsWithError:(id *)a0;
- (id)combinedInferredMapItemFromInferredMapItems:(id)a0 error:(id *)a1;
- (char)enumerateDedupedUUIDToMapItemMapUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)finalizeState:(id *)a0;
- (id)inferredMapItemFromInferredMapItemWithIntermediateUUID:(id)a0 error:(id *)a1;
- (char)ingestInferredMapItemWithIntermediateUUID:(id)a0 error:(id *)a1;
- (id)mapItemForDedupedUUID:(id)a0 error:(id *)a1;
- (id)mapItemForIntermediateUUID:(id)a0 error:(id *)a1;

@end
