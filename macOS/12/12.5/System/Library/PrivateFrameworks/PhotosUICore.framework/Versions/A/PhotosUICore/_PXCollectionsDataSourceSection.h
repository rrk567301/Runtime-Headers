@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) unsigned long long section;

- (long long)count;
- (id)objectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)content;
- (long long)countForCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0;
- (long long)indexOfCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;

@end
