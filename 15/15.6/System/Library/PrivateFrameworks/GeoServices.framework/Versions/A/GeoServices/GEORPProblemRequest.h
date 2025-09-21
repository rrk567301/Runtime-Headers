@class GEORPClientCapabilities, NSString, NSData, GEORPProblem, GEORPDebugSettings, PBDataReader, GEOPDClientMetadata, GEOPDAnalyticMetadata, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    NSString *_problemUuid;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_analyticMetadata : 1; unsigned char read_clientCapabilities : 1; unsigned char read_clientMetadata : 1; unsigned char read_debugSettings : 1; unsigned char read_devicePushToken : 1; unsigned char read_inputLanguage : 1; unsigned char read_problemUuid : 1; unsigned char read_problem : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasProblem;
@property (retain, nonatomic) GEORPProblem *problem;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) char hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) char hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) char hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) char hasProblemUuid;
@property (retain, nonatomic) NSString *problemUuid;
@property (readonly, nonatomic) char hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
