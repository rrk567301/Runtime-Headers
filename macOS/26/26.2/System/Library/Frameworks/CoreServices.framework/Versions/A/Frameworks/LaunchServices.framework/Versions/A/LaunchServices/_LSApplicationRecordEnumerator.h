@class NSURL, NSError;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    struct VolumeContainerResolutionAdapter { struct variant<unsigned int, NSURL *, NSError *> { struct __impl<unsigned int, NSURL *, NSError *> { union __union<std::__variant_detail::_Trait::_Available, 0UL, unsigned int, NSURL *, NSError *> { char __dummy; struct __alt<0UL, unsigned int> { unsigned int __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, NSURL *, NSError *> { char __dummy; struct __alt<1UL, NSURL *> { NSURL *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, NSError *> { char __dummy; struct __alt<2UL, NSError *> { NSError *__value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL> { } __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } volumeURLOrContainerOrError; } _volumeContainerAdapter;
    unsigned long long _options;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct { unsigned int *__cap_; } ; } _bundleIdentifiersOrUnits;
}

@property unsigned int bundleClass;

- (BOOL)_enumerateAllBundles;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 volumeURL:(id)a1 options:(unsigned long long)a2;
- (id)_applicationRecordWithContext:(struct LSContext { id x0; } *)a0 bundleIdentifierOrUnit:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;

@end
