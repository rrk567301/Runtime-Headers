@class CKDPRecordIdentifier, CKDPRecordFieldIdentifier, NSMutableArray, CKDPMergeableValueIdentifier;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *mergeableDeltas;

+ (Class)mergeableDeltasType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addMergeableDeltas:(id)a0;
- (void)clearMergeableDeltas;
- (id)mergeableDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)mergeableDeltasCount;

@end
