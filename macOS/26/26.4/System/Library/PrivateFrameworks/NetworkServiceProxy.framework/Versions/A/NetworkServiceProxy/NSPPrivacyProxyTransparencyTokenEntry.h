@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTransparencyTokenEntry : PBCodable <NSCopying>

@property (nonatomic) unsigned long long configurationDeliveryStart;
@property (nonatomic) unsigned long long configurationDeliveryEnd;
@property (retain, nonatomic) NSString *issuerName;
@property (retain, nonatomic) NSMutableArray *tokenKeys;

+ (Class)tokenKeysType;

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
- (void)addTokenKeys:(id)a0;
- (void)clearTokenKeys;
- (id)tokenKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenKeysCount;

@end
