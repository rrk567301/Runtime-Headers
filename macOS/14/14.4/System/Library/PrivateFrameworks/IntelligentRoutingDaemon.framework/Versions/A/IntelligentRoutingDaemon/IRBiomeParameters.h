@interface IRBiomeParameters : NSObject

@property (nonatomic) long long eventType;

- (Class)biomeEventClass;
- (id)contextPublisher;
- (id)initWithBiomeEventType:(long long)a0;
- (id)queryPublisherWithOptions:(id)a0;

@end
