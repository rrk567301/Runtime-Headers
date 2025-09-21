@class CKDPRecordType, CKDPRecordIdentifier, CKDPRecordFieldIdentifier, NSMutableArray, CKDPMergeableValueIdentifier;

@interface CKDPRecordRetrieveChangesResponseMergeableDeltaChange : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasFieldIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (retain, nonatomic) NSMutableArray *deltas;
@property (readonly, nonatomic) char hasRecordType;
@property (retain, nonatomic) CKDPRecordType *recordType;

+ (Class)deltasType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDeltas:(id)a0;
- (void)clearDeltas;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
