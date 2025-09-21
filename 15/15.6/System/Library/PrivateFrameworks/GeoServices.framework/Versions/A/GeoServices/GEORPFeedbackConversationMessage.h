@class PBDataReader, NSString, GEORPTimestamp, GEORPPostedBy, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_comments : 1; unsigned char read_postedAt : 1; unsigned char read_postedBy : 1; unsigned char read_surveyResponses : 1; unsigned char read_uuid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasPostedBy;
@property (retain, nonatomic) GEORPPostedBy *postedBy;
@property (readonly, nonatomic) char hasPostedAt;
@property (retain, nonatomic) GEORPTimestamp *postedAt;
@property (readonly, nonatomic) char hasComments;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSMutableArray *surveyResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)surveyResponseType;

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
- (void)addSurveyResponse:(id)a0;
- (void)clearSurveyResponses;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)surveyResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)surveyResponsesCount;

@end
