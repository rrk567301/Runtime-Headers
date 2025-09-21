@class GEORPRapNotification, NSString, GEORPUserFormDetails, PBUnknownFields, PBDataReader, GEORPDisplayDetails;

@interface GEORPRapResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPDisplayDetails *_displayDetails;
    GEORPRapNotification *_notification;
    NSString *_responseId;
    GEORPUserFormDetails *_userFormDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rapStateIcon;
    struct { unsigned char has_rapStateIcon : 1; unsigned char read_unknownFields : 1; unsigned char read_displayDetails : 1; unsigned char read_notification : 1; unsigned char read_responseId : 1; unsigned char read_userFormDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasResponseId;
@property (retain, nonatomic) NSString *responseId;
@property (nonatomic) char hasRapStateIcon;
@property (nonatomic) int rapStateIcon;
@property (readonly, nonatomic) char hasNotification;
@property (retain, nonatomic) GEORPRapNotification *notification;
@property (readonly, nonatomic) char hasDisplayDetails;
@property (retain, nonatomic) GEORPDisplayDetails *displayDetails;
@property (readonly, nonatomic) char hasUserFormDetails;
@property (retain, nonatomic) GEORPUserFormDetails *userFormDetails;
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
- (int)StringAsRapStateIcon:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)rapStateIconAsString:(int)a0;
- (void)readAll:(char)a0;

@end
