@class NSArray;

@interface CKUploadMergeableDeltasOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *deltas;
@property (copy, nonatomic) NSArray *replacementRequests;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
