@class PGGraphHighlightGroupNodeCollection, NSArray, MARelation;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (class, readonly) MARelation *highlightOfHighlightGroup;
@property (class, readonly) MARelation *typeOfHighlightGroup;

@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *collection;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)filter;
+ (id)filterWithUUIDs:(id)a0;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)momentInHighlight;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)a0;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)a0;

- (id)label;
- (unsigned long long)featureType;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHighlightEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)a0;
- (char)isAggregation;
- (char)isLongTrip;
- (char)isPartOfAggregation;
- (char)isPartOfLongTrip;
- (char)isPartOfShortTrip;
- (char)isPartOfTrip;
- (char)isShortTrip;
- (char)isTrip;

@end
