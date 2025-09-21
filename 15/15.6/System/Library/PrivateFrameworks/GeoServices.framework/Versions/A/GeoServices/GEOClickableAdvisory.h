@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOClickableAdvisory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _incidentIndexs;
    GEOFormattedString *_advisoryMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_incidentIndexs : 1; unsigned char read_advisoryMessage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAdvisoryMessage;
@property (retain, nonatomic) GEOFormattedString *advisoryMessage;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIncidentIndex:(unsigned int)a0;
- (void)clearIncidentIndexs;
- (void)clearUnknownFields:(char)a0;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
