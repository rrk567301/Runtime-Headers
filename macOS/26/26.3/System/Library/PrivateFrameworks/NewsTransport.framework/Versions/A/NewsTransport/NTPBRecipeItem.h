@class NTPBRecipeRecord, NSString;

@interface NTPBRecipeItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecipeRecord;
@property (retain, nonatomic) NTPBRecipeRecord *recipeRecord;
@property (readonly, nonatomic) BOOL hasSurfacedBy;
@property (retain, nonatomic) NSString *surfacedBy;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
