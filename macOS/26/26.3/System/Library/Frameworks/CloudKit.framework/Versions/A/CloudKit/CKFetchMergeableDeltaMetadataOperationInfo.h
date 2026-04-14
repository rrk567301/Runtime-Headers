@class NSArray;

@interface CKFetchMergeableDeltaMetadataOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *mergeableValueIDs;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
