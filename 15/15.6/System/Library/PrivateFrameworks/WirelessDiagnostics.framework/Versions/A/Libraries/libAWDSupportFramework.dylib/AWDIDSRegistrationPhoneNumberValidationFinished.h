@class NSString;

@interface AWDIDSRegistrationPhoneNumberValidationFinished : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numberOfSMSSent : 1; unsigned char registrationError : 1; unsigned char validationDuration : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) char hasValidationDuration;
@property (nonatomic) unsigned int validationDuration;
@property (nonatomic) char hasNumberOfSMSSent;
@property (nonatomic) unsigned int numberOfSMSSent;

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
