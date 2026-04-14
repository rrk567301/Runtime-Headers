@class BPSMulticast, NSNumber;
@protocol BPSSubscriber;

@interface BPSMulticastDownstream : BMBookmarkablePublisher

@property (readonly, nonatomic) BPSMulticast *multicast;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)upstreamPublishers;
- (id)nextEvent;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithMulticast:(id)a0;

@end
