@class NSString, NSMutableArray;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasView;
@property (retain, nonatomic) NSString *view;
@property (retain, nonatomic) NSMutableArray *categories;

+ (Class)categoriesType;
+ (id)TPPBPolicyCategoriesByViewWithView:(id)a0 categories:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)categoriesCount;
- (void)clearCategories;
- (void)addCategories:(id)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;

@end
