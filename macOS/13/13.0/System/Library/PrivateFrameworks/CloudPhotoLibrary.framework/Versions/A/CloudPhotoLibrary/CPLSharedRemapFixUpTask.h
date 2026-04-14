@class CPLScopedIdentifier;

@interface CPLSharedRemapFixUpTask : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *sharedCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *realCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *privateCloudScopedIdentifier;

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithSharedCloudScopedIdentifier:(id)a0 realCloudScopedIdentifier:(id)a1 privateCloudScopedIdentifier:(id)a2;

@end
