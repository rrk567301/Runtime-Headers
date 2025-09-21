@class PBUnknownFields;

@interface GEOTraversalTimes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _aggressiveEstimatedSeconds;
    unsigned int _conservativeEstimatedSeconds;
    unsigned int _estimatedSeconds;
    unsigned int _freeflowEstimatedSeconds;
    unsigned int _historicalEstimatedSeconds;
    struct { unsigned char has_aggressiveEstimatedSeconds : 1; unsigned char has_conservativeEstimatedSeconds : 1; unsigned char has_estimatedSeconds : 1; unsigned char has_freeflowEstimatedSeconds : 1; unsigned char has_historicalEstimatedSeconds : 1; } _flags;
}

@property (nonatomic) char hasEstimatedSeconds;
@property (nonatomic) unsigned int estimatedSeconds;
@property (nonatomic) char hasHistoricalEstimatedSeconds;
@property (nonatomic) unsigned int historicalEstimatedSeconds;
@property (nonatomic) char hasFreeflowEstimatedSeconds;
@property (nonatomic) unsigned int freeflowEstimatedSeconds;
@property (nonatomic) char hasAggressiveEstimatedSeconds;
@property (nonatomic) unsigned int aggressiveEstimatedSeconds;
@property (nonatomic) char hasConservativeEstimatedSeconds;
@property (nonatomic) unsigned int conservativeEstimatedSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
