@class NSString, NSData, PBDataReader;

@interface GEORRRequestResponseEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_appId;
    NSData *_encoded;
    NSString *_error;
    NSString *_eventId;
    unsigned long long _timestamp;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _eventType;
    int _requestType;
    char _withARPC;
    struct { unsigned char has_timestamp : 1; unsigned char has_eventType : 1; unsigned char has_requestType : 1; unsigned char has_withARPC : 1; unsigned char read_appId : 1; unsigned char read_encoded : 1; unsigned char read_error : 1; unsigned char read_eventId : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) char hasWithARPC;
@property (nonatomic) char withARPC;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) NSString *error;
@property (readonly, nonatomic) char hasEncoded;
@property (retain, nonatomic) NSData *encoded;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) NSString *appId;

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
- (int)StringAsEventType:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)decodeEvent;
- (id)eventTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)requestTypeAsString:(int)a0;

@end
