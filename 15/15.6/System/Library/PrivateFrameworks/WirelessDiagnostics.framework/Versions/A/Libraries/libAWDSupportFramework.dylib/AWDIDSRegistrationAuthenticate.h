@class NSString;

@interface AWDIDSRegistrationAuthenticate : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char genericError : 1; unsigned char isDSUser : 1; unsigned char isPhoneUser : 1; unsigned char pOSIXError : 1; unsigned char registrationError : 1; unsigned char resultCode : 1; unsigned char success : 1; unsigned char uRLError : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) char hasResultCode;
@property (nonatomic) unsigned int resultCode;
@property (nonatomic) char hasRegistrationError;
@property (nonatomic) unsigned int registrationError;
@property (nonatomic) char hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) char hasURLError;
@property (nonatomic) int uRLError;
@property (nonatomic) char hasPOSIXError;
@property (nonatomic) int pOSIXError;
@property (nonatomic) char hasIsPhoneUser;
@property (nonatomic) unsigned int isPhoneUser;
@property (nonatomic) char hasIsDSUser;
@property (nonatomic) unsigned int isDSUser;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
