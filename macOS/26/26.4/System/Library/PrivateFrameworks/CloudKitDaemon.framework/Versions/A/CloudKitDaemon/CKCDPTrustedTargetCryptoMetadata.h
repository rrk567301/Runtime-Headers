@class NSData, NSString;

@interface CKCDPTrustedTargetCryptoMetadata : PBCodable <NSCopying> {
    struct { unsigned char keyVersion : 1; unsigned char scheme : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedInvocationKey;
@property (retain, nonatomic) NSData *encryptedInvocationKey;
@property (readonly, nonatomic) BOOL hasProtectionSource;
@property (retain, nonatomic) NSString *protectionSource;
@property (nonatomic) BOOL hasKeyVersion;
@property (nonatomic) long long keyVersion;
@property (nonatomic) BOOL hasScheme;
@property (nonatomic) int scheme;

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
- (int)StringAsScheme:(id)a0;
- (id)schemeAsString:(int)a0;

@end
