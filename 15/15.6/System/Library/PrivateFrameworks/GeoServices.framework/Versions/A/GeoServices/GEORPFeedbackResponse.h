@class PBUnknownFields, GEORPFeedbackResult;

@interface GEORPFeedbackResponse : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackResult *_feedbackResult;
    int _feedbackRequestType;
    int _status;
    char _attestationNotFound;
    char _discardLogs;
    struct { unsigned char has_feedbackRequestType : 1; unsigned char has_status : 1; unsigned char has_attestationNotFound : 1; unsigned char has_discardLogs : 1; } _flags;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasFeedbackRequestType;
@property (nonatomic) int feedbackRequestType;
@property (readonly, nonatomic) char hasFeedbackResult;
@property (retain, nonatomic) GEORPFeedbackResult *feedbackResult;
@property (nonatomic) char hasDiscardLogs;
@property (nonatomic) char discardLogs;
@property (nonatomic) char hasAttestationNotFound;
@property (nonatomic) char attestationNotFound;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsFeedbackRequestType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)feedbackRequestTypeAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
