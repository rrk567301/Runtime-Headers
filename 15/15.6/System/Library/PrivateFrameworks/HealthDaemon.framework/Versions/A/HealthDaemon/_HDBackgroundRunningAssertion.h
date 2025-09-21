@class BKSProcessAssertion, HDHealthStoreClient;

@interface _HDBackgroundRunningAssertion : HDAssertion {
    char _shouldAcquireCLAssertion;
    HDHealthStoreClient *_client;
    BKSProcessAssertion *_bksAssertion;
}

- (void).cxx_destruct;

@end
