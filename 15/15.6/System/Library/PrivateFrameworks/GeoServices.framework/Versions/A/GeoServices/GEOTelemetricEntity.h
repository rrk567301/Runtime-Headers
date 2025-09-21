@class NSString, PBUnknownFields;

@interface GEOTelemetricEntity : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_eventDetail;
    unsigned long long _eventValue;
    int _eventKey;
    struct { unsigned char has_eventValue : 1; unsigned char has_eventKey : 1; } _flags;
}

@property (nonatomic) char hasEventKey;
@property (nonatomic) int eventKey;
@property (nonatomic) char hasEventValue;
@property (nonatomic) unsigned long long eventValue;
@property (readonly, nonatomic) char hasEventDetail;
@property (retain, nonatomic) NSString *eventDetail;
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
- (int)StringAsEventKey:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)eventKeyAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
