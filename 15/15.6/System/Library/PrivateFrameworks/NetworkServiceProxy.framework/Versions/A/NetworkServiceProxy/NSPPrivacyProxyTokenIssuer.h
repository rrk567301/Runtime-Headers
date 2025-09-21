@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyTokenIssuer : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *issuerName;
@property (retain, nonatomic) NSMutableArray *tokenKeys;
@property (readonly, nonatomic) char hasTransparencyKeyBundle;
@property (retain, nonatomic) NSData *transparencyKeyBundle;
@property (readonly, nonatomic) char hasTransparencyProof;
@property (retain, nonatomic) NSData *transparencyProof;
@property (readonly, nonatomic) char hasTransparencyInternalProof;
@property (retain, nonatomic) NSData *transparencyInternalProof;

+ (Class)tokenKeysType;

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
- (void)addTokenKeys:(id)a0;
- (void)clearTokenKeys;
- (id)tokenKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenKeysCount;

@end
