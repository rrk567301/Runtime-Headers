@class NSPPrivacyProxyTokenInfo, NSData, NSPPrivacyProxyBAAValidation, NSMutableArray;

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying>

@property (nonatomic) int authType;
@property (readonly, nonatomic) BOOL hasBaaParameters;
@property (retain, nonatomic) NSPPrivacyProxyBAAValidation *baaParameters;
@property (retain, nonatomic) NSPPrivacyProxyTokenInfo *tokenInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (retain, nonatomic) NSData *authInfo;
@property (retain, nonatomic) NSMutableArray *auxiliaryAuthArrays;

+ (Class)auxiliaryAuthArrayType;

- (id)authTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAuthType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAuxiliaryAuthArray:(id)a0;
- (id)auxiliaryAuthArrayAtIndex:(unsigned long long)a0;
- (unsigned long long)auxiliaryAuthArraysCount;
- (void)clearAuxiliaryAuthArrays;

@end
