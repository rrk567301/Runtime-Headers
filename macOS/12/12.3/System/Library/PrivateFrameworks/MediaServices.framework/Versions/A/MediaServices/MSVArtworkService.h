@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
