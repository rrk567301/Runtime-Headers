@class CPLChangeBatch;

@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *revertedChangesBatch;

+ (BOOL)supportsSecureCoding;

- (id)statusDescription;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)storageForStatusInStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStore:(id)a0 revertedChangesBatch:(id)a1;

@end
