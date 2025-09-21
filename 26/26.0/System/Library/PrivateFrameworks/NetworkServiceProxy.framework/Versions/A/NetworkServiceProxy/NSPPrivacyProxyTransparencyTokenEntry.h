@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTransparencyTokenEntry : PBCodable <NSCopying>

@property (nonatomic) unsigned long long configurationDeliveryStart;
@property (nonatomic) unsigned long long configurationDeliveryEnd;
@property (retain, nonatomic) NSString *issuerName;
@property (retain, nonatomic) NSMutableArray *tokenKeys;

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
