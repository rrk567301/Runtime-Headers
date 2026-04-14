@class NSCollectionViewLayoutAttributes, NSCollectionViewItem;

@interface _NSCollectionViewPrefetchItem : NSObject

@property (retain, nonatomic) NSCollectionViewLayoutAttributes *attributes;
@property (nonatomic) BOOL hasPrefetchedData;
@property (readonly) BOOL hasItemView;
@property (retain) NSCollectionViewItem *collectionViewItem;

- (id)initWithAttributes:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
