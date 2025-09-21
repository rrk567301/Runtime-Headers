@class NSIndexSet, NSSet, NSString, NSMutableIndexSet, NSMutableDictionary;
@protocol _NSCollectionLayoutAuxiliaryOffsets;

@interface _NSCollectionLayoutSolveParameters : NSObject <_NSCollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxiliaryDict;
    char _isFullResolve;
}

@property (readonly, nonatomic) char isFullResolve;
@property (readonly, nonatomic) char hasInvalidatedItems;
@property (readonly, nonatomic) id<_NSCollectionLayoutAuxiliaryOffsets> invalidatedSupplementaryOffsets;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersForFullResolve;

- (id)init;
- (void).cxx_destruct;
- (void)addAuxiliaryIndex:(long long)a0 elementKind:(id)a1;
- (void)addItemIndex:(long long)a0;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)a0;
- (id)initWithInvalidatedIndexes:(id)a0;
- (id)initWithInvalidatedIndexes:(id)a0 isFullResolve:(char)a1;
- (id)invalidatedAuxiliaryOffsets;

@end
