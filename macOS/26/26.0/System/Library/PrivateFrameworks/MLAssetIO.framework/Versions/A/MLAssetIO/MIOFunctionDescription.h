@class NSString, NSArray;

@interface MIOFunctionDescription : NSObject <NSCopying> {
    struct FunctionDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } input_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } output_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } state_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } name_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } predictedfeaturename_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } predictedprobabilitiesname_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; } _functionDescriptionParams;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *inputDescriptions;
@property (readonly, copy, nonatomic) NSArray *outputDescriptions;
@property (readonly, copy, nonatomic) NSArray *stateDescriptions;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, copy, nonatomic) NSArray *classLabels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpecification:(const void *)a0 classLabels:(id)a1;

@end
