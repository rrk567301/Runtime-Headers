@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

@property (readonly, nonatomic) id<MSPReplicaRecord> recordWithInformationToInsert;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifierOfAffectedRecord:(id)a0;
- (id)_initWithRecordToInsert:(id)a0 identifier:(id)a1;

@end
