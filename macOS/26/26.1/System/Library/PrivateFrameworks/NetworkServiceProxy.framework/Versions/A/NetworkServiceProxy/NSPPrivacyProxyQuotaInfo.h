@class NSMutableArray;

@interface NSPPrivacyProxyQuotaInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *quotaServices;

+ (Class)quotaServicesType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addQuotaServices:(id)a0;
- (void)clearQuotaServices;
- (id)quotaServicesAtIndex:(unsigned long long)a0;
- (unsigned long long)quotaServicesCount;

@end
