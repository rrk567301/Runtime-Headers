@class BPSMulticast, NSNumber;
@protocol BPSSubscriber;

@interface BPSMulticastDownstream : BMBookmarkablePublisher

@property (readonly, nonatomic) BPSMulticast *multicast;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithMulticast:(id)a0;

@end
