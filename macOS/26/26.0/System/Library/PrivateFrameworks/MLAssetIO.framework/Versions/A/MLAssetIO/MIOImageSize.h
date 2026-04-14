@interface MIOImageSize : NSObject <NSCopying> {
    struct ImageFeatureType_ImageSize { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; unsigned long long width_; unsigned long long height_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; } _imageSizeParams;
}

@property (readonly, nonatomic) long long pixelsWide;
@property (readonly, nonatomic) long long pixelsHigh;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
