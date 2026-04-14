@class NSUUID, NSString, NSArray, NSCollectionLayoutSize, NSCollectionLayoutEdgeSpacing;

@interface NSCollectionLayoutItem : NSObject <NSCopying> {
    struct { unsigned char hasComputedContainsEstimatedItem : 1; unsigned char containsEstimatedItem : 1; unsigned char hasComputedContainsItemWithAxesUniformAcrossSiblings : 1; unsigned char containsItemWithAxesUniformAcrossSiblings : 1; } _itemFlags;
}

@property (copy, nonatomic) NSCollectionLayoutSize *size;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSArray *decorationItems;
@property (nonatomic) struct CVCDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (copy, nonatomic) NSCollectionLayoutEdgeSpacing *edgeSpacing;
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;

+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;
+ (id)itemWithLayoutSize:(id)a0;

- (BOOL)isDecoration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBackgroundDecoration;
- (BOOL)isGroup;
- (id)description;
- (id)_externalDescription;
- (BOOL)isAuxillary;
- (struct CVCDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)isCustomGroup;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupplementary;
- (void)_enumerateItemsWithHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0 displayScale:(double)a1;
- (id)auxillaryItems;
- (BOOL)containsEstimatedSizeItem;
- (BOOL)hasCustomGroupItemProvider;
- (BOOL)ignoresRTL;
- (id)initWithSize:(id)a0 contentInsets:(struct CVCDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (BOOL)containsItemWithAxesUniformAcrossSiblings;

@end
