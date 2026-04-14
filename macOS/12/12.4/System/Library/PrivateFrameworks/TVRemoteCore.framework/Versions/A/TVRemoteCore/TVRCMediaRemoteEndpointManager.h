@class NSObject;
@protocol OS_dispatch_queue;

@interface TVRCMediaRemoteEndpointManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateActiveEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchActiveEndpointWithCompletion:(id /* block */)a0;

@end
