@class CKDPDistributedValueIdentifier, NSMutableArray;

@interface CKDPAtomBatchReplaceRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *batchIdentifiers;
@property (retain, nonatomic) NSMutableArray *atomBatches;

+ (id)options;
+ (Class)batchIdentifiersType;
+ (Class)atomBatchesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addBatchIdentifiers:(id)a0;
- (void)addAtomBatches:(id)a0;
- (unsigned long long)batchIdentifiersCount;
- (void)clearBatchIdentifiers;
- (id)batchIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)atomBatchesCount;
- (void)clearAtomBatches;
- (id)atomBatchesAtIndex:(unsigned long long)a0;

@end
