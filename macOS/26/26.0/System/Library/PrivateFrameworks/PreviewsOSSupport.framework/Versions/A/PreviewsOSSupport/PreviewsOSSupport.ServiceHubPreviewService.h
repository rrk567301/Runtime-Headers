@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ connection;
}

- (void)activateWithCompletion:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)observeCancelation:(id /* block */)a0;

@end
