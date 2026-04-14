@class TRIActiveEnvVarFactorsWriter;
@protocol TRIActiveEnvVarNamespacesProviding, TRINamespaceFactorLevelsRetrieving;

@interface TRIActiveEnvVarFactorsPublisher : NSObject {
    id<TRIActiveEnvVarNamespacesProviding> _namespacesProvider;
    id<TRINamespaceFactorLevelsRetrieving> _retriever;
    TRIActiveEnvVarFactorsWriter *_writer;
}

- (void).cxx_destruct;
- (id)initWithNamespacesProvider:(id)a0 factorRetriever:(id)a1 writer:(id)a2;
- (id)initWithServerContext:(id)a0;
- (void)publishLowLevelFactors;

@end
