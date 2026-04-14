@class NSCollectionView;

@interface _NSCollectionViewDiffableDataSource : _NSDiffableDataSourceSnapshotter

@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly, weak, nonatomic) NSCollectionView *collectionView;

- (id)initWithCollectionView:(id)a0 itemProvider:(id /* block */)a1;

@end
