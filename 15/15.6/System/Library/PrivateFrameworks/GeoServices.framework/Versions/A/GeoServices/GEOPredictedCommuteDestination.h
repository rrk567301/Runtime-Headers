@class PBUnknownFields;

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _confidenceScore;
    int _destinationType;
    char _chosen;
    struct { unsigned char has_confidenceScore : 1; unsigned char has_destinationType : 1; unsigned char has_chosen : 1; } _flags;
}

@property (nonatomic) char hasDestinationType;
@property (nonatomic) int destinationType;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) char hasChosen;
@property (nonatomic) char chosen;
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
- (int)StringAsDestinationType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)destinationTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
