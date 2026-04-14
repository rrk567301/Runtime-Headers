@class NSSet, NSString, NSMutableDictionary;

@interface _NSCollectionLayoutAuxiliaryOffsets : NSObject <_NSCollectionLayoutAuxiliaryOffsets, NSCopying> {
    NSMutableDictionary *_offsets;
}

@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)offsetsByApplyingOffsets:(id)a0;
- (id)offsetsByRebasingOnOffsets:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForElementKind:(id)a0;
- (id)indexesForElementKind:(id)a0;
- (long long)offsetForElementKind:(id)a0;
- (BOOL)overlapsOffsets:(id)a0;
- (BOOL)containsIndex:(long long)a0 forElementKind:(id)a1;
- (id)initWithOffsets:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forElementKind:(id)a1;
- (void)setIndexes:(id)a0 forElementKind:(id)a1;
- (void)addIndexes:(id)a0 forElementKind:(id)a1;
- (void)incrementCountsFromOffsets:(id)a0;
- (void)incrementCountForElementKind:(id)a0;
- (void)_offsetWithOffsets:(id)a0 applyingBase:(BOOL)a1;

@end
