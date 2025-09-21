@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *scopesChangeBatch;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statusDescription;
- (char)applyToStore:(id)a0 error:(id *)a1;
- (char)discardFromStore:(id)a0 error:(id *)a1;
- (id)initWithStore:(id)a0 scopesChangeBatch:(id)a1;
- (id)storageForStatusInStore:(id)a0;

@end
