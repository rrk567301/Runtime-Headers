@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _accessPointIndex;
    unsigned int _stopIndex;
    unsigned int _transferTime;
    char _displayStop;
    char _uncertainArrival;
    struct { unsigned char has_accessPointIndex : 1; unsigned char has_stopIndex : 1; unsigned char has_transferTime : 1; unsigned char has_displayStop : 1; unsigned char has_uncertainArrival : 1; } _flags;
}

@property (nonatomic) char hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) char hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) char hasDisplayStop;
@property (nonatomic) char displayStop;
@property (nonatomic) char hasTransferTime;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) char hasUncertainArrival;
@property (nonatomic) char uncertainArrival;
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
