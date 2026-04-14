@class NSString, NSMutableArray;

@interface NSPPrivacyProxyQuotaService : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (retain, nonatomic) NSMutableArray *supportedUseCaseIdentifiers;

+ (Class)supportedUseCaseIdentifiersType;

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
- (void)addSupportedUseCaseIdentifiers:(id)a0;
- (void)clearSupportedUseCaseIdentifiers;
- (id)supportedUseCaseIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedUseCaseIdentifiersCount;

@end
