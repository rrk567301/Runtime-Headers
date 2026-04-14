@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *transactionsBytes;
@property (retain, nonatomic) NSMutableArray *transactionPassIDs;

+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;

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
- (void)addTransactionPassIDs:(id)a0;
- (void)addTransactionsBytes:(id)a0;
- (void)clearTransactionPassIDs;
- (void)clearTransactionsBytes;
- (id)transactionPassIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionPassIDsCount;
- (id)transactionsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionsBytesCount;

@end
