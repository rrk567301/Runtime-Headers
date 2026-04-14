@class NSDictionary, CalStopwatch, NSError, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CalAgentLinkOperation : NSObject

@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) CalStopwatch *stopwatch;
@property (weak, nonatomic) NSObject<OS_xpc_object> *connection;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly, retain, nonatomic) NSDictionary *inputPayload;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) BOOL isAllowedToBeRunOnAgent;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)disableAgentLinkForTesting;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)prepare;
- (void)setErrorWithCode:(long long)a0;
- (BOOL)eligibleForExecution;
- (void)responsePayloadReceived:(id)a0;
- (void)_finishWithTimeout;
- (void)willFinish;

@end
