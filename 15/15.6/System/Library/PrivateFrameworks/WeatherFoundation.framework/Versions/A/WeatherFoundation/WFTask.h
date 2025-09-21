@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) char requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) char isCancelled;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)start;
- (void)cancel;
- (void)handleResponse:(id)a0;
- (void)executeSynchronously;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResponseRequired:(char)a0;
- (void)startWithService:(id)a0;

@end
