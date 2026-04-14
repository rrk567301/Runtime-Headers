@class NSMutableDictionary;

@interface BKThreeLevelForest : NSObject {
    NSMutableDictionary *_trunkToBranchDictionary;
}

- (void).cxx_destruct;
- (void)enumerate:(id /* block */)a0;
- (void)addLeaf:(id)a0 toBranch:(id)a1 trunk:(id)a2;
- (id)dictionaryContainingBranchesToLeaves;
- (void)enumerateTrunk:(id)a0 block:(id /* block */)a1;
- (id)leavesOnBranch:(id)a0 trunk:(id)a1;
- (void)removeTrunk:(id)a0;

@end
