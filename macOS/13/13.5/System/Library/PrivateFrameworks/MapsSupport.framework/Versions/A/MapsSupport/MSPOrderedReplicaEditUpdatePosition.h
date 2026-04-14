@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toPosition:(id)a1 positionTimestamp:(id)a2;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
