@interface CHPersonalizedSynthesisModelStatus : NSObject <NSSecureCoding> {
    struct map<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>, std::less<CHModelCatalogModelVariant>, std::allocator<std::pair<const CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>>> { struct __tree<std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, std::__map_value_compare<CHModelCatalogModelVariant, std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, std::less<CHModelCatalogModelVariant>>, std::allocator<std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _modelStates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)isPersonalizedSynthesisAvailableForKo;
+ (BOOL)isPersonalizedSynthesisAvailableForLatin;
+ (BOOL)isPersonalizedSynthesisAvailableForZhJa;
+ (id)modelStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)getStateForVariant:(long long)a0;
- (id)getVersionForVariant:(long long)a0;
- (id)initFromStates:(id)a0 versions:(id)a1;

@end
