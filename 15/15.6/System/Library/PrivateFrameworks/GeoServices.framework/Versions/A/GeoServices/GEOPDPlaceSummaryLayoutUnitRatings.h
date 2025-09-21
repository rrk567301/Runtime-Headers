@interface GEOPDPlaceSummaryLayoutUnitRatings : PBCodable <NSCopying> {
    char _shouldShowRatingCount;
    struct { unsigned char has_shouldShowRatingCount : 1; } _flags;
}

@property (nonatomic) char hasShouldShowRatingCount;
@property (nonatomic) char shouldShowRatingCount;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
