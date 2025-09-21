@class NSArray, NSString;

@interface MIOStateConstraint : NSObject <MIOFeatureValueConstraint> {
    struct StateFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; union TypeUnion { struct ConstantInitialized { } _constinit_; struct ArrayFeatureType *arraytype_; } Type_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; unsigned int _oneof_case_[1]; } _stateFeatureTypeParams;
}

@property (readonly, copy, nonatomic) NSArray *bufferShape;
@property (readonly, nonatomic) long long dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)stateFeatureTypeSpecification;

@end
