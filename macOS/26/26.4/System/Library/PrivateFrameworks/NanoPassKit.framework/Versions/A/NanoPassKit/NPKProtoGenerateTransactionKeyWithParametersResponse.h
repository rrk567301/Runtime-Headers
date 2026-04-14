@class NSString, NSMutableArray, NSData;

@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTransactionKeyIdentifier;
@property (retain, nonatomic) NSString *transactionKeyIdentifier;
@property (retain, nonatomic) NSMutableArray *transactionKeyCertChains;
@property (readonly, nonatomic) BOOL hasAppletIdentifier;
@property (retain, nonatomic) NSData *appletIdentifier;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)transactionKeyCertChainType;

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
- (id)transactionKeyCertChainAtIndex:(unsigned long long)a0;
- (void)addTransactionKeyCertChain:(id)a0;
- (void)clearTransactionKeyCertChains;
- (unsigned long long)transactionKeyCertChainsCount;

@end
