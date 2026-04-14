@class NSString, _PASBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPNamedEntityClientProtocol;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol> {
    id<PPNamedEntityClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)rankedNamedEntitiesWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)unblockPendingQueries;
- (void)mapItemForPlaceName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setRemoteObjectProxy:(id)a0;
- (void)namedEntityRecordsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (id)init;

@end
