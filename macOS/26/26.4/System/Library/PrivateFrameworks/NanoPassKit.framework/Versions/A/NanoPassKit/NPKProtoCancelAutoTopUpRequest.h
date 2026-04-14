@class NSString, NSMutableArray;

@interface NPKProtoCancelAutoTopUpRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSMutableArray *balanceIdentifiers;

+ (Class)balanceIdentifiersType;

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
- (void)addBalanceIdentifiers:(id)a0;
- (id)balanceIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)balanceIdentifiersCount;
- (void)clearBalanceIdentifiers;

@end
