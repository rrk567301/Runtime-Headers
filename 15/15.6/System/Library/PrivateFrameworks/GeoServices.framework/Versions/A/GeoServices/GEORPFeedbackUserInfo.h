@class GEORPTdmInfo, NSString, GEORPUserCredentials, NSData, PBDataReader, GEORPAppAttestInfo, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAppAttestInfo *_anonUserInfo;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPAppAttestInfo *_rolloverInfo;
    GEORPTdmInfo *_tdmUserInfo;
    NSString *_ugcUserId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_anonUserInfo : 1; unsigned char read_devicePushToken : 1; unsigned char read_preferredEmail : 1; unsigned char read_rolloverInfo : 1; unsigned char read_tdmUserInfo : 1; unsigned char read_ugcUserId : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) char hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) char hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) char hasPreferredEmail;
@property (retain, nonatomic) NSString *preferredEmail;
@property (readonly, nonatomic) char hasUgcUserId;
@property (retain, nonatomic) NSString *ugcUserId;
@property (readonly, nonatomic) char hasAnonUserInfo;
@property (retain, nonatomic) GEORPAppAttestInfo *anonUserInfo;
@property (readonly, nonatomic) char hasRolloverInfo;
@property (retain, nonatomic) GEORPAppAttestInfo *rolloverInfo;
@property (readonly, nonatomic) char hasTdmUserInfo;
@property (retain, nonatomic) GEORPTdmInfo *tdmUserInfo;
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
