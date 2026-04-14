@class COMessageSessionProducer;

@interface COMessageProducedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionProducer *producer;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMember:(id)a0 producer:(id)a1;

@end
