@class CKDPDistributedValueIdentifier, CKDPAtomBatch;

@interface CKDPAtomBatchSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier;
@property (readonly, nonatomic) BOOL hasAtomBatch;
@property (retain, nonatomic) CKDPAtomBatch *atomBatch;

+ (id)options;

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

@end
