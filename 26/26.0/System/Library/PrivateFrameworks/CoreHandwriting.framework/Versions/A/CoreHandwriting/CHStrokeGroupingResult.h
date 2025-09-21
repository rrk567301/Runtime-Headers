@class NSSet, NSArray;

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSArray *_textStrokeGroupsSortedByCTLD;
    NSArray *_strokeGroupsSortedByCTLD;
    NSArray *_textStrokeGroupClusters;
    NSArray *_strokeGroupClusters;
    NSSet *_textStrokeGroups;
    NSSet *_nontextStrokeGroups;
    struct map<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>, std::less<std::set<unsigned long>>, std::allocator<std::pair<const std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>>> { struct __tree<std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, std::__map_value_compare<std::set<unsigned long>, std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, std::less<std::set<unsigned long>>>, std::allocator<std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _cachedAdjacencies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeGroups;
@property (readonly, copy, nonatomic) NSSet *createdStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *deletedStrokeGroups;
@property (readonly, copy, nonatomic) NSArray *strokeGroupClusters;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupClusters;
@property (readonly, copy, nonatomic) NSSet *textStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *nontextStrokeGroups;

+ (id)expandedStrokeGroupClusters:(id)a0 allClusters:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)cachedAdjacencies;
- (id)groupingResultUpdatedWithGroupReplacements:(id)a0;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2;
- (id)initWithStrokeGroups:(id)a0 createdStrokeGroups:(id)a1 deletedStrokeGroups:(id)a2 cachedAdjacencies:(const void *)a3;
- (BOOL)isEquivalentToStrokeGroupingResult:(id)a0;
- (id)strokeGroupsSortedBy:(unsigned long long)a0 textGroupsOnly:(BOOL)a1;
- (id)textStrokeGroupClustersAtPosition:(struct CGPoint { double x0; double x1; })a0 closestAbove:(id *)a1 closestBelow:(id *)a2;

@end
