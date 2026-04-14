@class NSMutableDictionary;

@interface HMMTRAttributeReportDistributor : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *receivers;

- (id)init;
- (void).cxx_destruct;
- (void)deregisterHandlerForAttributePath:(id)a0 registry:(id)a1;
- (void)distributeAttributeReport:(id)a0;
- (id)registerHandlerForAttributePath:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
