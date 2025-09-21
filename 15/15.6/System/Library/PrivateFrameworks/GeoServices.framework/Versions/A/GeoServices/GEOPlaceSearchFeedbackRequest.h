@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct { unsigned char has_sessionGUID : 1; unsigned char has_businessID : 1; unsigned char has_timestamp : 1; unsigned char has_feedbackType : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_numberOfResults : 1; unsigned char has_positionInResults : 1; unsigned char has_sequenceNumber : 1; } _flags;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasSessionGUID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionGUID;
@property (nonatomic) char hasBusinessID;
@property (nonatomic) long long businessID;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) char hasNumberOfResults;
@property (nonatomic) int numberOfResults;
@property (nonatomic) char hasPositionInResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
