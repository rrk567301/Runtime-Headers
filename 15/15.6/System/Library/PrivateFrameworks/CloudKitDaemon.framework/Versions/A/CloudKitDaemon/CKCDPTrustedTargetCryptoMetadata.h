@class NSData, NSString;

@interface CKCDPTrustedTargetCryptoMetadata : PBCodable <NSCopying> {
    struct { unsigned char keyVersion : 1; unsigned char scheme : 1; } _has;
}

@property (readonly, nonatomic) char hasEncryptedInvocationKey;
@property (retain, nonatomic) NSData *encryptedInvocationKey;
@property (readonly, nonatomic) char hasProtectionSource;
@property (retain, nonatomic) NSString *protectionSource;
@property (nonatomic) char hasKeyVersion;
@property (nonatomic) long long keyVersion;
@property (nonatomic) char hasScheme;
@property (nonatomic) int scheme;

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
- (id)schemeAsString:(int)a0;
- (int)StringAsScheme:(id)a0;

@end
