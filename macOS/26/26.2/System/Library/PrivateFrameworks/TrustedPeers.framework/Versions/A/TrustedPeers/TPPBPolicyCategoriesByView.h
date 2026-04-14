@class NSString, NSMutableArray;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view;
@property (retain, nonatomic) NSMutableArray *categories;

+ (Class)categoriesType;
+ (id)TPPBPolicyCategoriesByViewWithView:(id)a0 categories:(id)a1;

- (void)writeTo:(id)a0;
- (void)addCategories:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)clearCategories;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)categoriesCount;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
