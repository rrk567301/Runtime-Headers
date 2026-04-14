@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ connection;
}

- (void)activateWithCompletion:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)observeCancelation:(id /* block */)a0;

@end
