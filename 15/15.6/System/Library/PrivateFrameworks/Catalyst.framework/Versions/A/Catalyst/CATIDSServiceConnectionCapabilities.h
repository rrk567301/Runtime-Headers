@interface CATIDSServiceConnectionCapabilities : NSObject

@property (readonly, nonatomic) char supportsReliableDelivery;

- (id)init;
- (id)initWithMessagingVersion:(unsigned long long)a0;

@end
