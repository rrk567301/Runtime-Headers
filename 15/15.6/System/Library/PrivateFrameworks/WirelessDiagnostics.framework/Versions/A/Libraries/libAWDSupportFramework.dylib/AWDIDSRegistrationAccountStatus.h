@class NSString;

@interface AWDIDSRegistrationAccountStatus : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char accountType : 1; unsigned char doesExist : 1; unsigned char isEnabled : 1; unsigned char isUserDisabled : 1; unsigned char isiCloudSignedIn : 1; unsigned char isiTunesSignedIn : 1; unsigned char registrationError : 1; unsigned char registrationErrorReason : 1; unsigned char registrationStatus : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasAccountType;
@property (nonatomic) int accountType;
@property (readonly, nonatomic) char hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) char hasDoesExist;
@property (nonatomic) unsigned int doesExist;
@property (nonatomic) char hasIsEnabled;
@property (nonatomic) unsigned int isEnabled;
@property (nonatomic) char hasIsUserDisabled;
@property (nonatomic) unsigned int isUserDisabled;
@property (nonatomic) char hasIsiCloudSignedIn;
@property (nonatomic) unsigned int isiCloudSignedIn;
@property (nonatomic) char hasRegistrationStatus;
@property (nonatomic) int registrationStatus;
@property (nonatomic) char hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) char hasRegistrationErrorReason;
@property (nonatomic) int registrationErrorReason;
@property (nonatomic) char hasIsiTunesSignedIn;
@property (nonatomic) unsigned int isiTunesSignedIn;

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
