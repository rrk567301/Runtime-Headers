@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicates:(id)a0;
- (id)description;
- (id)init;

@end
