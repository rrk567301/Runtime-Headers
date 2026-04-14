@class CKDPDistributedValueIdentifier, NSMutableArray;

@interface CKDPAtomSyncRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *atomBatchs;

+ (id)options;
+ (Class)atomBatchType;

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
- (void)addAtomBatch:(id)a0;
- (unsigned long long)atomBatchsCount;
- (void)clearAtomBatchs;
- (id)atomBatchAtIndex:(unsigned long long)a0;

@end
