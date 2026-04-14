@interface APSKDestination : NSObject {
    int _destinationType;
    void *_value;
}

- (void *)value;
- (void)dealloc;
- (int)destinationType;
- (id)initWithDiscoveryInfo:(id)a0;
- (id)initWithEndpointID:(id)a0;
- (id)initWithEndpointName:(id)a0;
- (id)initWithNetworkAddress:(id)a0;

@end
