@class NSString, NSMutableArray;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view;
@property (retain, nonatomic) NSMutableArray *categories;

+ (Class)categoriesType;
+ (id)TPPBPolicyCategoriesByViewWithView:(id)a0 categories:(id)a1;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addCategories:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearCategories;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)categoriesCount;

@end
