@class NSCollectionViewLayoutAttributes, NSCollectionViewItem;

@interface _NSCollectionViewPrefetchItem : NSObject

@property (retain, nonatomic) NSCollectionViewLayoutAttributes *attributes;
@property (nonatomic) BOOL hasPrefetchedData;
@property (readonly) BOOL hasItemView;
@property (retain) NSCollectionViewItem *collectionViewItem;

- (id)description;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;

@end
