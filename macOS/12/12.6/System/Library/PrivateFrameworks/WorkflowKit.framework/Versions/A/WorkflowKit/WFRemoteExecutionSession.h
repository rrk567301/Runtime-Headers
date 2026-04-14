@class NSString, WFRemoteExecutionRequest, NSObject, IDSService;
@protocol OS_dispatch_source, WFRemoteExecutionSessionDelegate;

@interface WFRemoteExecutionSession : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) WFRemoteExecutionRequest *request;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<WFRemoteExecutionSessionDelegate> delegate;
@property (readonly, nonatomic) IDSService *service;

- (void).cxx_destruct;
- (void)finish;
- (id)initWithService:(id)a0;
- (void)finishWithError:(id)a0;
- (void)cancelTimeout;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (void)handleIncomingProtobuf:(id)a0;
- (void)restartTimeout;
- (id)sessionTimedOutError;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (id)invalidAceCommandError;

@end
