@class NSUUID, NSString, NSArray, NSCollectionLayoutSize, NSCollectionLayoutEdgeSpacing;

@interface NSCollectionLayoutItem : NSObject <NSCopying> {
    BOOL _containsEstimatedSizeItem;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _contentInsets;
}

@property (copy, nonatomic) NSCollectionLayoutSize *size;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSArray *decorationItems;
@property (nonatomic) BOOL hasComputedContainsEstimatedItem;
@property struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (copy) NSCollectionLayoutEdgeSpacing *edgeSpacing;
@property (readonly) NSCollectionLayoutSize *layoutSize;

+ (id)itemWithLayoutSize:(id)a0;
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isGroup;
- (id)_externalDescription;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (void)_enumerateItemsWithHandler:(id /* block */)a0;
- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)hasCustomGroupItemProvider;
- (BOOL)isAuxiliary;
- (BOOL)isDecoration;
- (BOOL)isSupplementary;
- (id)auxiliaryItems;
- (BOOL)containsEstimatedSizeItem;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0;
- (BOOL)isCustomGroup;
- (BOOL)isAuxillary;
- (id)auxillaryItems;
- (BOOL)ignoresRTL;
- (id)_visualDescription;

@end
