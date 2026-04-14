@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ connection;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)observeCancelation:(id /* block */)a0;

@end
