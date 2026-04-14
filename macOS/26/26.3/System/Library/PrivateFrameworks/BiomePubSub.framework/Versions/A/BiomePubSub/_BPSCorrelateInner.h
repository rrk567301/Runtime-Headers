@class BPSCorrelateHandler;

@interface _BPSCorrelateInner : BPSCorrelationProducer

@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler;

- (id)receiveNewValue:(id)a0 source:(long long)a1;
- (id)newBookmark;
- (id)initWithDownstream:(id)a0 correlateHandler:(id)a1;
- (void).cxx_destruct;

@end
