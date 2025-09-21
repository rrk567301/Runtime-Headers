@class NSString, HDCodableError;

@interface HDCodableCompanionUserNotificationResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) char hasSuccess;
@property (nonatomic) char success;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) HDCodableError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
