@class GEORPScorecard;

@interface GEORPScorecardUpdate : PBCodable <NSCopying> {
    GEORPScorecard *_scorecard;
    int _action;
    struct { unsigned char has_action : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasScorecard;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;

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
- (int)StringAsAction:(id)a0;
- (id)actionAsString:(int)a0;

@end
