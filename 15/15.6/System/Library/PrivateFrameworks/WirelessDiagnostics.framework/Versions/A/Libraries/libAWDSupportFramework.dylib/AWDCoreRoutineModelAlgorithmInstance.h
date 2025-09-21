@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying> {
    struct { unsigned char addressComponentMatches : 1; unsigned char distanceFromTruth : 1; unsigned char uncertainty : 1; unsigned char efficacy : 1; unsigned char previousType : 1; unsigned char source : 1; unsigned char truthSource : 1; unsigned char truthType : 1; unsigned char type : 1; unsigned char isRotted : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) char hasEfficacy;
@property (nonatomic) unsigned int efficacy;
@property (nonatomic) char hasSource;
@property (nonatomic) unsigned int source;
@property (nonatomic) char hasUncertainty;
@property (nonatomic) double uncertainty;
@property (nonatomic) char hasDistanceFromTruth;
@property (nonatomic) double distanceFromTruth;
@property (nonatomic) char hasAddressComponentMatches;
@property (nonatomic) unsigned long long addressComponentMatches;
@property (nonatomic) char hasPreviousType;
@property (nonatomic) unsigned int previousType;
@property (nonatomic) char hasTruthType;
@property (nonatomic) unsigned int truthType;
@property (nonatomic) char hasTruthSource;
@property (nonatomic) unsigned int truthSource;
@property (nonatomic) char hasIsRotted;
@property (nonatomic) char isRotted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
