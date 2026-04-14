@class MIOImageSizeConstraint, NSString, MIOImageSize;

@interface MIOImageConstraint : NSObject <MIOFeatureValueConstraint> {
    struct ImageFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadata { long long ptr_; } _internal_metadata_; long long width_; long long height_; int colorspace_; union SizeFlexibilityUnion { struct ConstantInitialized { } _constinit_; struct ImageFeatureType_EnumeratedImageSizes *enumeratedsizes_; struct ImageFeatureType_ImageSizeRange *imagesizerange_; } SizeFlexibility_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; unsigned int _oneof_case_[1]; } _imageFeatureTypeParams;
}

@property (readonly, nonatomic) MIOImageSize *imageSize;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) MIOImageSizeConstraint *sizeConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)imageFeatureTypeSpecification;

@end
