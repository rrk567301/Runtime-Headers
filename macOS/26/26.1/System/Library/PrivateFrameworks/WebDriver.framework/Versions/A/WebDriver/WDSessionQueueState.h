@class NSMutableArray, WDCommandRequest;

@interface WDSessionQueueState : NSObject

@property (readonly, nonatomic) WDCommandRequest *currentRequest;
@property (readonly, nonatomic) NSMutableArray *queuedRequests;
@property (nonatomic) BOOL acceptsRequests;

- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeueNextRequest;
- (void)finishCurrentRequest;

@end
