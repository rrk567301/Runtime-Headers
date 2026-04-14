@class NTPBRecipeRecord, NSString;

@interface NTPBRecipeItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecipeRecord;
@property (retain, nonatomic) NTPBRecipeRecord *recipeRecord;
@property (readonly, nonatomic) BOOL hasSurfacedBy;
@property (retain, nonatomic) NSString *surfacedBy;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
