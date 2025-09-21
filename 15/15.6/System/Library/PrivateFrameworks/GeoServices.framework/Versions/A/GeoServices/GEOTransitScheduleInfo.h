@class GEOTransitEntry, PBUnknownFields;

@interface GEOTransitScheduleInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOTransitEntry *_entry;
}

@property (readonly, nonatomic) char hasEntry;
@property (retain, nonatomic) GEOTransitEntry *entry;
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
- (id)windowStartDate;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)lineID;
- (void)readAll:(char)a0;
- (id)routingParameters;
- (id)staticDepartureDate;
- (unsigned long long)tripID;

@end
