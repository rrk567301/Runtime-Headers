@class BPSMulticast, NSNumber;
@protocol BPSSubscriber;

@interface BPSMulticastDownstream : BMBookmarkablePublisher

@property (readonly, nonatomic) BPSMulticast *multicast;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;

- (id)nextEvent;
- (id)upstreamPublishers;
- (BOOL)completed;
- (id)startWithSubscriber:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithMulticast:(id)a0;

@end
