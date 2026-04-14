@class NSString, NSMutableArray;

@interface NSPPrivacyProxyQuotaService : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (retain, nonatomic) NSMutableArray *supportedUseCaseIdentifiers;

+ (Class)supportedUseCaseIdentifiersType;

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
- (void)addSupportedUseCaseIdentifiers:(id)a0;
- (void)clearSupportedUseCaseIdentifiers;
- (id)supportedUseCaseIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedUseCaseIdentifiersCount;

@end
