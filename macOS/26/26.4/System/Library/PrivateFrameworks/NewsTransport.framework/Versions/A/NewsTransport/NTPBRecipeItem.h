@class NTPBRecipeRecord, NSString;

@interface NTPBRecipeItem : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecipeRecord;
@property (retain, nonatomic) NTPBRecipeRecord *recipeRecord;
@property (readonly, nonatomic) BOOL hasSurfacedBy;
@property (retain, nonatomic) NSString *surfacedBy;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) long long order;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
