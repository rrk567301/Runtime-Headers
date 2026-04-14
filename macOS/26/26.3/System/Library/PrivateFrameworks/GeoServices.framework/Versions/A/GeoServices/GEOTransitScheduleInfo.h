@class GEOTransitEntry, PBUnknownFields;

@interface GEOTransitScheduleInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOTransitEntry *_entry;
}

@property (readonly, nonatomic) BOOL hasEntry;
@property (retain, nonatomic) GEOTransitEntry *entry;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)windowStartDate;
- (unsigned long long)lineID;
- (id)routingParameters;
- (id)staticDepartureDate;
- (unsigned long long)tripID;

@end
