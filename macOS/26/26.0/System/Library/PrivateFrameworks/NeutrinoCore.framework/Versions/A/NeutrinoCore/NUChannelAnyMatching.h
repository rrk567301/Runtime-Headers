@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (id)init;
- (id)description;
- (id)initWithPredicates:(id)a0;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;

@end
