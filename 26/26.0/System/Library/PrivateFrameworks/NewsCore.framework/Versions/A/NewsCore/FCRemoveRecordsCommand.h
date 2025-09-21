@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand <FCRecordTransformingCommand> {
    NSArray *_recordIDs;
}

@property (readonly, nonatomic) NSArray *createdOrModifiedRecordIDs;
@property (readonly, nonatomic) NSArray *deletedRecordIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRecordIDs:(id)a0;
- (id)init;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)applyToRemoteRecords:(id)a0 remoteDeletions:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;

@end
