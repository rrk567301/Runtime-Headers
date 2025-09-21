@class PGGraphNode, NSMutableDictionary, NSDictionary;
@protocol PGGraphRelatableEvent;

@interface PGGraphMatchingResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *context;
@property (readonly, nonatomic) PGGraphNode<PGGraphRelatableEvent> *event;
@property (nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *keywords;

+ (id)matchingDescriptionWithEventNode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (char)isEqualToResult:(id)a0;
- (id)localEndDate;
- (id)localStartDate;
- (id)_contextItemsSortedByScoreAscending:(char)a0;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)a0;
- (void)addKeywords:(id)a0 forRelatedType:(unsigned long long)a1;
- (void)clearKeywordsForRelatedType:(unsigned long long)a0;
- (id)contextItemForRelatedType:(unsigned long long)a0;
- (void)enumerateContextItems:(id /* block */)a0;
- (id)keywordsForRelatedType:(unsigned long long)a0;
- (void)setContextItem:(id)a0 forRelatedType:(unsigned long long)a1;
- (id)sortedCriteria;

@end
