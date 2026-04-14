@interface FileProviderDaemon.DummyOperationClient : FPOperation <FPOperationClient> {
    void /* unknown type, empty encoding */ perThumbnailCompletionHandler;
    void /* unknown type, empty encoding */ cancellationHandler;
}

- (void)setCancellationHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;

@end
