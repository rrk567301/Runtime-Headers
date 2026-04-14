@class NSArray;

@interface NUChannelAnyMatching : NUChannelMatching

@property (readonly, copy, nonatomic) NSArray *predicates;

- (id)description;
- (id)init;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicates:(id)a0;

@end
