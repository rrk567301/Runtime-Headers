@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject

@property (readonly, nonatomic) PPScoredItem *scoredNamedEntity;
@property (readonly, nonatomic) unsigned short occurrencesInSource;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredNamedEntity:(id)a0 occurrencesInSource:(unsigned short)a1;

@end
