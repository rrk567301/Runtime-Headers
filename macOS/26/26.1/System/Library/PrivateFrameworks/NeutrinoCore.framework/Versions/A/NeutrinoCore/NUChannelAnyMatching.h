@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (BOOL)match:(id)a0;
- (id)initWithPredicates:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
