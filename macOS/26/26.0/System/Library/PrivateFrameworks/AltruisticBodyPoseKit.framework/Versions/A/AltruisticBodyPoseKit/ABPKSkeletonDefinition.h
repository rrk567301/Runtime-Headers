@class NSArray, NSDictionary;

@interface ABPKSkeletonDefinition : NSObject {
    NSArray *_jointNames;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; long long *__cap_; } _jointParentIndicesVector;
    struct map<long, std::vector<long>, std::less<long>, std::allocator<std::pair<const long, std::vector<long>>>> { struct __tree<std::__value_type<long, std::vector<long>>, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>>, std::allocator<std::__value_type<long, std::vector<long>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _parentsToChildIndicesMap;
    NSDictionary *_jointNamesToIndices;
}

@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) long long rootJointIndex;
@property (readonly, nonatomic) NSArray *parentChildOrder;

+ (id)computeParentChildOrderFor:(const void *)a0 withRoot:(long long)a1;

- (id)initWithType:(long long)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)jointName:(long long)a0;
- (long long)parentJoint:(long long)a0;
- (void)enumerateChildrenJointIndicesOfJointAtIndex:(long long)a0 withBlock:(id /* block */)a1;
- (id)getChildrenIndices:(long long)a0;
- (long long)indexOfJointWithName:(id)a0;
- (id)initWithPlist:(id)a0 fromBundle:(id)a1;

@end
