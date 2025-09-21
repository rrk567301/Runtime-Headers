@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {
    struct { unsigned char userauthOneof : 1; } _has;
}

@property (readonly, nonatomic) char hasGsAuthToken;
@property (retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken;
@property (nonatomic) char hasUserauthOneof;
@property (nonatomic) int userauthOneof;

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
- (int)StringAsUserauthOneof:(id)a0;
- (void)clearOneofValuesForUserauthOneof;
- (id)userauthOneofAsString:(int)a0;

@end
