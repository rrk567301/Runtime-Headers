@class COMessageSessionConsumer;

@interface COMessageConsumedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionConsumer *consumer;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMember:(id)a0 consumer:(id)a1;

@end
