@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)match:(id)a0;
- (id)initWithPredicates:(id)a0;

@end
