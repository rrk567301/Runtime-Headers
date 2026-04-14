@class NSMutableArray;

@interface ClientSubpayloads : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *clientPayloads;

+ (Class)clientPayloadsType;

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
- (void)addClientPayloads:(id)a0;
- (void)clearClientPayloads;
- (id)clientPayloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)clientPayloadsCount;

@end
