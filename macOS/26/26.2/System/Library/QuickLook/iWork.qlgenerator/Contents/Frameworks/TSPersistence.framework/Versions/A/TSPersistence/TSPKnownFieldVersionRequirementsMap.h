@interface TSPKnownFieldVersionRequirementsMap : NSObject {
    struct unique_ptr<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> { struct { void *__ptr_; } ; } _map;
}

+ (id)newKnownFieldVersionRequirementsMapForMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 knownFieldRuleProvider:(id)a1;
+ (void *)updateMap:(void *)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1 byAddingRulesFromKnownFieldRuleProvider:(id)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (id)initWithMap:(void *)a0;
- (void)saveToArchiver:(id)a0;
- (void)addRulesFromKnownFieldRuleProvider:(id)a0;

@end
