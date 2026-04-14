@class CPLChangeBatch, NSDictionary, NSSet, NSArray;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *diffBatch;
@property (readonly, nonatomic) NSDictionary *pushContexts;
@property (readonly, nonatomic) NSSet *deletedScopeIdentifiers;
@property (readonly, nonatomic) NSArray *addedRecords;
@property (readonly, nonatomic) NSArray *updatedRecords;
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers;
@property (readonly, nonatomic) NSDictionary *recordWithStatusChangesToNotify;
@property (readonly, nonatomic) NSArray *revertedChanges;

+ (BOOL)supportsSecureCoding;

- (id)statusDescription;
- (id)initWithPushSessionTracker:(id)a0 error:(id *)a1;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)storageForStatusInStore:(id)a0;

@end
