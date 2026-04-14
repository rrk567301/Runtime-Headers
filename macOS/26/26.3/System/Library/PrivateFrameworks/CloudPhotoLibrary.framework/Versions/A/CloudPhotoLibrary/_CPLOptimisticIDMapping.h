@class NSString;
@protocol CPLEngineIDMapping;

@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping>

@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (BOOL)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (id)initWithIDMapping:(id)a0;

@end
