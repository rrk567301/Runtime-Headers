@class NSString;
@protocol MIOFeatureValueConstraint;

@interface MIOFeatureDescription : NSObject <NSMutableCopying> {
    struct FeatureDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } name_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } shortdescription_; struct FeatureType *type_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; } _featureDescriptionParams;
    NSString *_cachedName;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL optional;
@property (readonly, copy, nonatomic) id<MIOFeatureValueConstraint> constraint;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setShortDescription:(id)a0;
- (const void *)featureDescriptionSpecification;
- (id)featureTypeStringForModelViewer;
- (id)featureTypeDictionaryForModelViewer;

@end
