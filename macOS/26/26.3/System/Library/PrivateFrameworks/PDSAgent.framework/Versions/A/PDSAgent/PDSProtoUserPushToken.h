@class NSString, PDSProtoUserAuth;

@interface PDSProtoUserPushToken : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserAuth;
@property (retain, nonatomic) PDSProtoUserAuth *userAuth;
@property (retain, nonatomic) NSString *pushToken;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
