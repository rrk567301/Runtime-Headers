@class PDSProtoUserPushToken, NSString;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying>

@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
