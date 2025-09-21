@class NSArray, NSString, PXCollectionsDataSection, NSDictionary, NSIndexSet, NSNumber;

@interface PXNavigationListDataSection : PXDataSection {
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_countNumber;
    BOOL _skipAssetCountFetches;
}

@property (readonly, nonatomic) PXCollectionsDataSection *collectionsDataSection;
@property (readonly, nonatomic) NSArray *sectionRangeMap;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, copy, nonatomic) NSString *topLevelIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *childDataSections;
@property (readonly, copy, nonatomic) NSDictionary *childIndexHints;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)content;
- (id)debugDescription;
- (long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)a0;
- (id)initWithCollectionsDataSection:(id)a0;
- (id)existingFetchResultForListItem:(id)a0;
- (void)_createDataSubsectionsIfNecessary;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)a0;
- (long long)indexForListItem:(id)a0;
- (long long)indexInCollectionsDataSectionOfListItem:(id)a0 hintIndex:(long long)a1;
- (id)initWithCollectionsDataSection:(id)a0 indentationLevel:(long long)a1 topLevelIdentifier:(id)a2 childDataSections:(id)a3 childIndexHints:(id)a4 skipAssetCountFetches:(BOOL)a5;
- (id)initWithOutlineObject:(id)a0;
- (id)parentOfListItemAtIndex:(long long)a0 localIndex:(long long *)a1;
- (long long)validatedIndexOfListItem:(id)a0 hintIndex:(long long)a1;

@end
