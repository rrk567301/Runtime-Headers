@class NSString, GEORPUserCredentials, NSData, PBDataReader;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _didOptIn;
    struct { unsigned char has_didOptIn : 1; unsigned char read_devicePushToken : 1; unsigned char read_problemId : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) char hasDidOptIn;
@property (nonatomic) char didOptIn;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;

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
- (id)initWithJSON:(id)a0;
- (id)initWithSubmissionID:(id)a0 allowContactBackAtEmailAddress:(id)a1 traits:(id)a2;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
