@interface AWDIDSRegistrationAuthenticationParametersReceived : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceRequest : 1; unsigned char timestamp : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasError;
@property (nonatomic) int error;
@property (nonatomic) char hasTimeIntervalSinceRequest;
@property (nonatomic) unsigned long long timeIntervalSinceRequest;

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
