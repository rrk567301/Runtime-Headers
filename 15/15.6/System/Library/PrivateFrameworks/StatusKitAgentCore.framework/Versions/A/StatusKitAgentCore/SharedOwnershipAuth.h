@class NSString, NSData;

@interface SharedOwnershipAuth : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) char hasChannelPublicKey;
@property (retain, nonatomic) NSData *channelPublicKey;
@property (readonly, nonatomic) char hasNonce;
@property (retain, nonatomic) NSData *nonce;
@property (readonly, nonatomic) char hasSignNonce;
@property (retain, nonatomic) NSData *signNonce;
@property (readonly, nonatomic) char hasServerEncryptionKey;
@property (retain, nonatomic) NSData *serverEncryptionKey;

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
