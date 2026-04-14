@class NSMutableArray;

@interface NSPPrivacyProxyQuotaInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *quotaServices;

+ (Class)quotaServicesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addQuotaServices:(id)a0;
- (void)clearQuotaServices;
- (id)quotaServicesAtIndex:(unsigned long long)a0;
- (unsigned long long)quotaServicesCount;

@end
