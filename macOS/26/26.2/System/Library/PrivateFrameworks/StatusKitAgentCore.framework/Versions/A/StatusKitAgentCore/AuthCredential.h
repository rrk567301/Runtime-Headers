@class NSString, SharedOwnershipAuth;

@interface AuthCredential : PBCodable <NSCopying> {
    struct { unsigned char authCredentialOneof : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) BOOL hasSharedOwnershipAuth;
@property (retain, nonatomic) SharedOwnershipAuth *sharedOwnershipAuth;
@property (nonatomic) BOOL hasAuthCredentialOneof;
@property (nonatomic) int authCredentialOneof;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsAuthCredentialOneof:(id)a0;
- (id)authCredentialOneofAsString:(int)a0;
- (void)clearOneofValuesForAuthCredentialOneof;

@end
