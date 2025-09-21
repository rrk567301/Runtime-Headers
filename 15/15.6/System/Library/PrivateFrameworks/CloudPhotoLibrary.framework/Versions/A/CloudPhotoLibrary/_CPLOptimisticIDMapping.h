@class NSString;
@protocol CPLEngineIDMapping;

@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping>

@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(char)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(char *)a1;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (id)initWithIDMapping:(id)a0;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(char *)a1;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(char)a2 direction:(unsigned long long)a3 error:(id *)a4;

@end
