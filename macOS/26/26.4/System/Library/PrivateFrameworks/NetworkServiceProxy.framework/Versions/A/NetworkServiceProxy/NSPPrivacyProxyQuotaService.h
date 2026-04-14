@class NSString, NSMutableArray;

@interface NSPPrivacyProxyQuotaService : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceURL;
@property (retain, nonatomic) NSString *serviceURL;
@property (retain, nonatomic) NSMutableArray *supportedUseCaseIdentifiers;

+ (Class)supportedUseCaseIdentifiersType;

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
- (void)addSupportedUseCaseIdentifiers:(id)a0;
- (void)clearSupportedUseCaseIdentifiers;
- (id)supportedUseCaseIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedUseCaseIdentifiersCount;

@end
