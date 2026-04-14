@class COMessageSessionProducer;

@interface COMessageProducedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionProducer *producer;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMember:(id)a0 producer:(id)a1;

@end
