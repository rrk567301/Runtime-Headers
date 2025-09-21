@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCMediaAnalyzerDelegate;

@interface AVCMediaAnalyzer : NSObject {
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _analysisType;
}

@property (readonly, nonatomic) id<AVCMediaAnalyzerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) long long streamToken;

+ (long long)analysisTypeWithClientAnalysisType:(long long)a0;

- (void)disconnect;
- (void)dealloc;
- (BOOL)connect;
- (void)deregisterBlocksForNotifications;
- (void)didEnableHandlerWithResult:(id)a0 error:(id)a1;
- (void)didProduceMediaAnalysisHandlerWithResult:(id)a0 error:(id)a1;
- (void)enableMediaAnalyzer:(BOOL)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 analysisType:(long long)a2 streamToken:(long long)a3;
- (id)mediaAnalyzerResultsWithInternalResult:(id)a0;
- (void)registerBlocksForNotifications;
- (BOOL)setUpDelegateQueue:(id)a0;

@end
