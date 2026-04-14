@class WDProtocolModel, NSMutableDictionary;
@protocol WDSessionHost;

@interface WDProtocolBackendProxy : NSObject {
    id<WDSessionHost> _sessionHost;
    WDProtocolModel *_model;
    long long _nextSequenceId;
    NSMutableDictionary *_pendingResponses;
}

@property (copy, nonatomic) id /* block */ protocolEventHandler;

- (void).cxx_destruct;
- (id)initWithSessionHost:(id)a0 protocolWithURL:(id)a1;
- (id)initWithProtocolAtURL:(id)a0;
- (void)dispatchMessageToFrontend:(id)a0;
- (void)sendCommand:(id)a0 parameters:(id)a1 responseHandler:(id /* block */)a2;
- (void)cancelPendingResponsesWithErrorMessage:(id)a0;

@end
