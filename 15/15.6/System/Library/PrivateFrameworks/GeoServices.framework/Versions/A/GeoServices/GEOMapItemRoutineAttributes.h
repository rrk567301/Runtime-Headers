@class PBDataReader, NSUUID, NSString, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _loiType;
    char _isEventAllDay;
    struct { unsigned char has_eventDate : 1; unsigned char has_loiType : 1; unsigned char has_isEventAllDay : 1; unsigned char read_unknownFields : 1; unsigned char read_eventName : 1; unsigned char read_loiIdentifierString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSUUID *loiIdentifier;
@property (nonatomic) char hasLoiType;
@property (nonatomic) int loiType;
@property (readonly, nonatomic) char hasEventName;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) char hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) char hasIsEventAllDay;
@property (nonatomic) char isEventAllDay;
@property (readonly, nonatomic) char hasLoiIdentifierString;
@property (retain, nonatomic) NSString *loiIdentifierString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (int)StringAsLoiType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)loiTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
