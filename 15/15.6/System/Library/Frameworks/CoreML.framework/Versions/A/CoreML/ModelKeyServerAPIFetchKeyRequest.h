@class NSString, NSData;

@interface ModelKeyServerAPIFetchKeyRequest : PBRequest <NSCopying> {
    struct { unsigned char rawRequest : 1; } _has;
}

@property (readonly, nonatomic) char hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) char hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) char hasSignedKeyRequest;
@property (retain, nonatomic) NSData *signedKeyRequest;
@property (nonatomic) char hasRawRequest;
@property (nonatomic) char rawRequest;

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
