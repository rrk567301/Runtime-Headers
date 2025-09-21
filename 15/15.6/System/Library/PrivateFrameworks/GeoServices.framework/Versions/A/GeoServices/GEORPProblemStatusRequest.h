@class GEORPClientCapabilities, NSString, PBDataReader, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPUserCredentials, GEOServicesState, NSMutableArray;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOABSecondPartyPlaceRequestClientMetaData *_abAssignmentMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    NSMutableArray *_problemIds;
    GEOServicesState *_servicesState;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _suppressLogging;
    struct { unsigned char has_suppressLogging : 1; unsigned char read_abAssignmentMetadata : 1; unsigned char read_analyticMetadata : 1; unsigned char read_clientCapabilities : 1; unsigned char read_problemIds : 1; unsigned char read_servicesState : 1; unsigned char read_statusNotificationId : 1; unsigned char read_userCredentials : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) char hasStatusNotificationId;
@property (retain, nonatomic) NSString *statusNotificationId;
@property (retain, nonatomic) NSMutableArray *problemIds;
@property (readonly, nonatomic) char hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) char hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) char hasAbAssignmentMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (readonly, nonatomic) char hasServicesState;
@property (retain, nonatomic) GEOServicesState *servicesState;
@property (nonatomic) char hasSuppressLogging;
@property (nonatomic) char suppressLogging;

+ (char)isValid:(id)a0;
+ (Class)problemIdType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned long long)problemIdsCount;
- (void)clearProblemIds;
- (void)addProblemId:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)populateAnalyticsMetadata;
- (id)problemIdAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;

@end
