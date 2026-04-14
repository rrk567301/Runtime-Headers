@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTransparencyTokenEntry : PBCodable <NSCopying>

@property (nonatomic) unsigned long long configurationDeliveryStart;
@property (nonatomic) unsigned long long configurationDeliveryEnd;
@property (retain, nonatomic) NSString *issuerName;
@property (retain, nonatomic) NSMutableArray *tokenKeys;

+ (Class)tokenKeysType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTokenKeys:(id)a0;
- (void)clearTokenKeys;
- (id)tokenKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenKeysCount;

@end
