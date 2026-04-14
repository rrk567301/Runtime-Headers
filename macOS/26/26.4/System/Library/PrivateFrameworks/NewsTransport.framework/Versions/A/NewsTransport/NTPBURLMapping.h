@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)domainsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (id)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(id)a0;

@end
