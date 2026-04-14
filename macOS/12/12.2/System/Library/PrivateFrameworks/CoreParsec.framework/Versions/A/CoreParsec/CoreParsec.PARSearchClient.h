@interface CoreParsec.PARSearchClient : NSObject <PARClientXPC> {
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ imageLoader;
    void /* unknown type, empty encoding */ receivingStreamDelegate;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ connection;

- (void)bagDidLoad:(id)a0 error:(id)a1;
- (void)didDownloadResource:(id)a0;
- (void)didDeleteResource:(id)a0;
- (void)didReceiveFeedbackData:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (void)clearCompletionsFrom:(id)a0 to:(id)a1;
- (void)bag:(id)a0 reply:(id /* block */)a1;
- (void)forceFetchBag:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)request:(id)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)listSessions:(id /* block */)a0;
- (void)getImageMap:(id /* block */)a0;
- (void)reportFeedback:(id)a0 feedback:(id)a1 queryId:(unsigned long long)a2;

@end
