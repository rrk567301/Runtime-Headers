@protocol TRINamespaceManagementProtocol;

@interface TRIActiveRolloutsSysdiagnoseProvider : NSObject <TRISysdiagnoseInfoProviding> {
    id<TRINamespaceManagementProtocol> _namespaceClient;
}

+ (BOOL)_isFactorRecordFileType:(id)a0;

- (id)filename;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNamespaceManagementClient:(id)a0;
- (id)sysdiagnoseLinesWithError:(id *)a0;

@end
