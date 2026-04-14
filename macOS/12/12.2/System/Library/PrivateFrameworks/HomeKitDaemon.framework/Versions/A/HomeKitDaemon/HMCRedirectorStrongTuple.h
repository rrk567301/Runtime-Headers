@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject

@property (readonly, nonatomic) HMCRedirectorTuple *tuple;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithTuple:(id)a0;
- (void)sendMessageWithChanges:(id)a0;

@end
