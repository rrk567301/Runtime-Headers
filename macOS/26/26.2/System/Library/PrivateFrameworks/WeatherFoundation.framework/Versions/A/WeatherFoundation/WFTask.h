@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)cleanup;
- (void)cancel;
- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (void)executeSynchronously;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResponseRequired:(BOOL)a0;
- (void)startWithService:(id)a0;

@end
