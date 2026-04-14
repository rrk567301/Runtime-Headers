@class COMessageSessionConsumer;

@interface COMessageConsumedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionConsumer *consumer;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMember:(id)a0 consumer:(id)a1;

@end
