@class NSMutableArray;

@interface HMDRapportMessagingReceiverContext : NSObject

@property (copy) id /* block */ requestHandler;
@property (retain, nonatomic) NSMutableArray *requestQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequestHandler:(id /* block */)a0;

@end
