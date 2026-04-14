@class NSString, NSMutableArray;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view;
@property (retain, nonatomic) NSMutableArray *categories;

+ (id)TPPBPolicyCategoriesByViewWithView:(id)a0 categories:(id)a1;
+ (Class)categoriesType;

- (void)clearCategories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)addCategories:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)categoriesCount;
- (id)description;
- (void)writeTo:(id)a0;

@end
