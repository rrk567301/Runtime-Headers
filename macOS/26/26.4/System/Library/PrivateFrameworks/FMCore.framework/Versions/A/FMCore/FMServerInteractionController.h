@class NSURLSession, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
}

@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)processResponseForCommand:(id)a0 callback:(id /* block */)a1;
- (double)_simulatedLatency;
- (void)sendCommand:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)networkActivityStatus:(BOOL)a0;
- (id)init;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)a0;
- (void)dealloc;

@end
