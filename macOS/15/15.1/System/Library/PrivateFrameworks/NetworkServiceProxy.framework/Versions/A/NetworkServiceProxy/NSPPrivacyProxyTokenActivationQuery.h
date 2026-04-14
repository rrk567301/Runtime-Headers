@class NSPPrivacyProxyTokenInfo, NSData, NSPPrivacyProxyBAAValidation;

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying>

@property (nonatomic) int authType;
@property (readonly, nonatomic) BOOL hasBaaParameters;
@property (retain, nonatomic) NSPPrivacyProxyBAAValidation *baaParameters;
@property (retain, nonatomic) NSPPrivacyProxyTokenInfo *tokenInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (retain, nonatomic) NSData *authInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAuthType:(id)a0;
- (id)authTypeAsString:(int)a0;

@end
