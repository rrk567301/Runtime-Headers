@class CPLChangeBatch;

@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *revertedChangesBatch;

+ (BOOL)supportsSecureCoding;

- (id)statusDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)storageForStatusInStore:(id)a0;
- (id)initWithStore:(id)a0 revertedChangesBatch:(id)a1;

@end
