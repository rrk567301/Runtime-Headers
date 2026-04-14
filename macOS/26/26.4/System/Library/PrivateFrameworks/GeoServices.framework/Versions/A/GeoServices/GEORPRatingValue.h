@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying> {
    GEOLocalizedString *_categoryName;
    int _score;
    struct { unsigned char has_score : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCategoryName;
@property (retain, nonatomic) GEOLocalizedString *categoryName;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int score;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
