@class NSData, PBUnknownFields;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _lineId;
    unsigned long long _referenceTripId;
    NSData *_routingParameters;
    unsigned long long _transitId;
    char _includeAllDirectionNames;
    char _includeAllHeadsigns;
    struct { unsigned char has_lineId : 1; unsigned char has_referenceTripId : 1; unsigned char has_transitId : 1; unsigned char has_includeAllDirectionNames : 1; unsigned char has_includeAllHeadsigns : 1; } _flags;
}

@property (nonatomic) char hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) char hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic) char hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
@property (readonly, nonatomic) char hasRoutingParameters;
@property (retain, nonatomic) NSData *routingParameters;
@property (nonatomic) char hasIncludeAllDirectionNames;
@property (nonatomic) char includeAllDirectionNames;
@property (nonatomic) char hasIncludeAllHeadsigns;
@property (nonatomic) char includeAllHeadsigns;
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
