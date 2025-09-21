@class NSString, NSData;

@interface CKDPRecordStableUrl : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (readonly, nonatomic) char hasEncryptedPublicSharingKey;
@property (retain, nonatomic) NSData *encryptedPublicSharingKey;
@property (readonly, nonatomic) char hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;

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
