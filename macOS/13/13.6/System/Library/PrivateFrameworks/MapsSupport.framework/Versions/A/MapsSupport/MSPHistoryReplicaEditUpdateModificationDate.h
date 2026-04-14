@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

@property (readonly, nonatomic) NSDate *modificationDate;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)a0 toModificationDate:(id)a1;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;

@end
