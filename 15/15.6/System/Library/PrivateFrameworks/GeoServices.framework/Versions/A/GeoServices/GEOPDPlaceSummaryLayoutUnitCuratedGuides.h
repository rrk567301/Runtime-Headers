@interface GEOPDPlaceSummaryLayoutUnitCuratedGuides : PBCodable <NSCopying> {
    unsigned int _minNumGuides;
    struct { unsigned char has_minNumGuides : 1; } _flags;
}

@property (nonatomic) char hasMinNumGuides;
@property (nonatomic) unsigned int minNumGuides;

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
