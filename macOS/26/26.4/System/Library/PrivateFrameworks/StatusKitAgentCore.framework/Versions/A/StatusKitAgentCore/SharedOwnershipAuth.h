@class NSString, NSData;

@interface SharedOwnershipAuth : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) BOOL hasChannelPublicKey;
@property (retain, nonatomic) NSData *channelPublicKey;
@property (readonly, nonatomic) BOOL hasNonce;
@property (retain, nonatomic) NSData *nonce;
@property (readonly, nonatomic) BOOL hasSignNonce;
@property (retain, nonatomic) NSData *signNonce;
@property (readonly, nonatomic) BOOL hasServerEncryptionKey;
@property (retain, nonatomic) NSData *serverEncryptionKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
