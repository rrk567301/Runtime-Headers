@class NSString;

@interface MIODictionaryConstraint : NSObject <MIOFeatureValueConstraint> {
    struct DictionaryFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; union KeyTypeUnion { struct ConstantInitialized { } _constinit_; struct Int64FeatureType *int64keytype_; struct StringFeatureType *stringkeytype_; } KeyType_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; unsigned int _oneof_case_[1]; } _dictionaryFeatureTypeParams;
}

@property (readonly, nonatomic) long long keyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)dictionaryFeatureTypeSpecification;

@end
