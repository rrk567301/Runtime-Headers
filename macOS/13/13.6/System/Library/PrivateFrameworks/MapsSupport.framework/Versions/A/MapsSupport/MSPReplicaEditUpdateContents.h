@class NSData, MSPVectorTimestamp;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

@property (readonly, nonatomic) NSData *contents;
@property (readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toContents:(id)a1 contentsTimestamp:(id)a2;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)a0;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
