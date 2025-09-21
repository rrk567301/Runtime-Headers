@class NSString, SharedOwnershipAuth;

@interface AuthCredential : PBCodable <NSCopying> {
    struct { unsigned char authCredentialOneof : 1; } _has;
}

@property (readonly, nonatomic) char hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) char hasSharedOwnershipAuth;
@property (retain, nonatomic) SharedOwnershipAuth *sharedOwnershipAuth;
@property (nonatomic) char hasAuthCredentialOneof;
@property (nonatomic) int authCredentialOneof;

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
- (int)StringAsAuthCredentialOneof:(id)a0;
- (id)authCredentialOneofAsString:(int)a0;
- (void)clearOneofValuesForAuthCredentialOneof;

@end
