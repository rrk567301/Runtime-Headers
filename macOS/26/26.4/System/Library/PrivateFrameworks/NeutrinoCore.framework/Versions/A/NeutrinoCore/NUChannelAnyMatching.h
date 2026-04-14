@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (id)initWithPredicates:(id)a0;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
