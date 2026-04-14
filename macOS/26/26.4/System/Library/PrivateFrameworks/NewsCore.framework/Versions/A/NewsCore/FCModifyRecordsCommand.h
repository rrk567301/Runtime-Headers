@class NSArray;

@interface FCModifyRecordsCommand : FCCommand <FCRecordTransformingCommand> {
    BOOL _merge;
    id /* block */ _localRecordsGenerator;
    NSArray *_localRecords;
}

@property (readonly, nonatomic) NSArray *t_localRecords;
@property (readonly, nonatomic) NSArray *createdOrModifiedRecordIDs;
@property (readonly, nonatomic) NSArray *deletedRecordIDs;

+ (id)desiredKeys;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)applyToRemoteRecords:(id)a0 remoteDeletions:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (id)initWithLocalRecords:(id)a0 merge:(BOOL)a1;
- (id)initWithLocalRecordsGenerator:(id /* block */)a0 merge:(BOOL)a1;

@end
