@class NSMutableArray;

@interface HMDRapportMessagingReceiverContext : NSObject

@property (copy) id /* block */ requestHandler;
@property (retain, nonatomic) NSMutableArray *requestQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequestHandler:(id /* block */)a0;

@end
