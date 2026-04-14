@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)start;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executeSynchronously;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResponseRequired:(BOOL)a0;
- (void)startWithService:(id)a0;

@end
