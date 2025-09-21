@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPRapNotificationLogEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_originalRapId;
    NSString *_responseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _userInteractedWithNotification;
    char _userShownNotification;
    struct { unsigned char has_userInteractedWithNotification : 1; unsigned char has_userShownNotification : 1; unsigned char read_unknownFields : 1; unsigned char read_originalRapId : 1; unsigned char read_responseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasOriginalRapId;
@property (retain, nonatomic) NSString *originalRapId;
@property (readonly, nonatomic) char hasResponseId;
@property (retain, nonatomic) NSString *responseId;
@property (nonatomic) char hasUserShownNotification;
@property (nonatomic) char userShownNotification;
@property (nonatomic) char hasUserInteractedWithNotification;
@property (nonatomic) char userInteractedWithNotification;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
