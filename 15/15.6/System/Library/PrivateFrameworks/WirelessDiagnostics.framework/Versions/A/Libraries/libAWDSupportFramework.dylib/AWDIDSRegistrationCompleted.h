@class NSString;

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char circleStatus : 1; unsigned char registrationError : 1; unsigned char registrationType : 1; unsigned char wasSuccessful : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasRegistrationType;
@property (nonatomic) int registrationType;
@property (readonly, nonatomic) char hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) char hasWasSuccessful;
@property (nonatomic) unsigned int wasSuccessful;
@property (nonatomic) char hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) char hasCircleStatus;
@property (nonatomic) int circleStatus;

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
