@interface DRSPDClient : NSObject

@property (nonatomic) BOOL isActivated;
@property (copy, nonatomic) id /* block */ requestHandler;

- (void)activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)reset;
- (id)init;
- (void)handleEvent:(id)a0;
- (void)dealloc;
- (void)handleRequest:(id)a0;

@end
