@class NSIndexSet, NSSet, NSString, NSMutableIndexSet, NSMutableDictionary;

@interface _NSCollectionLayoutSolveResult : NSObject <_NSCollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxiliaryIndexesDict;
}

@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addInvalidatedItemIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addInvalidatedItemIndexes:(id)a0;
- (void)addInvalidatedItemIndex:(long long)a0;
- (id)init;
- (void)addInvalidatedSupplementariesWithOffsets:(id)a0;
- (void).cxx_destruct;
- (void)addInvalidatedAuxiliaryOfKind:(id)a0 index:(long long)a1;
- (void)addInvalidatedAuxiliaryOfKind:(id)a0 indexes:(id)a1;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)a0;
- (id)invalidatedAuxiliaryOffsets;

@end
