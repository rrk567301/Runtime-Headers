@class NSArray, NSString, NSDictionary;

@interface MIOModelDescription : NSObject <NSMutableCopying> {
    struct ModelDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } input_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } output_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } state_; struct RepeatedPtrField<CoreML::Specification::FunctionDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } functions_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } traininginput_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } predictedfeaturename_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } predictedprobabilitiesname_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } defaultfunctionname_; struct Metadata *metadata_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; } _modelDescriptionParams;
    NSArray *_classLabelsPerFunction;
}

@property (readonly, copy, nonatomic) NSArray *functionDescriptions;
@property (readonly, copy, nonatomic) NSString *defaultFunctionName;
@property (readonly, copy, nonatomic) NSArray *inputDescriptions;
@property (readonly, copy, nonatomic) NSArray *outputDescriptions;
@property (readonly, copy, nonatomic) NSArray *stateDescriptions;
@property (readonly, copy, nonatomic) NSArray *trainingInputDescriptions;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, nonatomic) BOOL updatable;
@property (readonly, copy, nonatomic) NSDictionary *parameterDescriptionsByKey;
@property (readonly, copy, nonatomic) NSArray *classLabels;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setMetadata:(id)a0;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_setShortDescription:(id)a0 forInputFeatureWithName:(id)a1 functionName:(id)a2;
- (void)_setShortDescription:(id)a0 forOutputFeatureWithName:(id)a1 functionName:(id)a2;
- (void)_setShortDescription:(id)a0 forStateFeatureWithName:(id)a1 functionName:(id)a2;
- (void)_setShortDescription:(id)a0 forTrainingInputFeatureWithName:(id)a1;
- (id)initWithSpecification:(const void *)a0 isUpdatable:(BOOL)a1 modelParameters:(id)a2 classLabelsPerFunction:(id)a3 error:(id *)a4;
- (const void *)modelDescriptionSpecification;

@end
