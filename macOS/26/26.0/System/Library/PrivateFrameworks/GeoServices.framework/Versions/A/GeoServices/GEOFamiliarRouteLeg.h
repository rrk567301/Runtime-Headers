@class NSData, PBUnknownFields;

@interface GEOFamiliarRouteLeg : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_pathLeg;
    unsigned int _beginTimestamp;
    unsigned int _endTimestamp;
    int _transportType;
    unsigned int _usualTraversalTimeSeconds;
    struct { unsigned char has_beginTimestamp : 1; unsigned char has_endTimestamp : 1; unsigned char has_transportType : 1; unsigned char has_usualTraversalTimeSeconds : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasPathLeg;
@property (retain, nonatomic) NSData *pathLeg;
@property (nonatomic) BOOL hasBeginTimestamp;
@property (nonatomic) unsigned int beginTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) unsigned int endTimestamp;
@property (nonatomic) BOOL hasUsualTraversalTimeSeconds;
@property (nonatomic) unsigned int usualTraversalTimeSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
