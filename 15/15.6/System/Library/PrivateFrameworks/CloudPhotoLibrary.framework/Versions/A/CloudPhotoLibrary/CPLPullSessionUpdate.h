@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *clientBatch;
@property (readonly, nonatomic) CPLChangeBatch *cloudBatch;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statusDescription;
- (char)applyToStore:(id)a0 error:(id *)a1;
- (char)discardFromStore:(id)a0 error:(id *)a1;
- (id)initWithStore:(id)a0 expandedClientBatch:(id)a1 expandedCloudBatch:(id)a2;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;
- (id)storageForStatusInStore:(id)a0;

@end
