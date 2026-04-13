@class NSMutableArray;

@interface LogTransactions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *transactionIDs;

+ (Class)transactionIDType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)formattedText;
- (unsigned long long)transactionIDsCount;
- (void)addTransactionID:(id)a0;
- (void)clearTransactionIDs;
- (id)transactionIDAtIndex:(unsigned long long)a0;

@end
