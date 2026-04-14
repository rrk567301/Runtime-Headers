@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyTokenIssuer : PBCodable <NSCopying> {
    struct { unsigned char supportsTokenUsageFeedback : 1; } _has;
}

@property (retain, nonatomic) NSString *issuerName;
@property (retain, nonatomic) NSMutableArray *tokenKeys;
@property (readonly, nonatomic) BOOL hasTransparencyKeyBundle;
@property (retain, nonatomic) NSData *transparencyKeyBundle;
@property (readonly, nonatomic) BOOL hasTransparencyProof;
@property (retain, nonatomic) NSData *transparencyProof;
@property (readonly, nonatomic) BOOL hasTransparencyInternalProof;
@property (retain, nonatomic) NSData *transparencyInternalProof;
@property (nonatomic) BOOL hasSupportsTokenUsageFeedback;
@property (nonatomic) BOOL supportsTokenUsageFeedback;

+ (Class)tokenKeysType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTokenKeys:(id)a0;
- (void)clearTokenKeys;
- (id)tokenKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenKeysCount;

@end
