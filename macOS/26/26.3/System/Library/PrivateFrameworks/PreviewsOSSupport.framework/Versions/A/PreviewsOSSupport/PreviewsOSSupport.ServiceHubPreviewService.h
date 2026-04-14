@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ connection;
}

- (void)cancel;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)observeCancelation:(id /* block */)a0;

@end
