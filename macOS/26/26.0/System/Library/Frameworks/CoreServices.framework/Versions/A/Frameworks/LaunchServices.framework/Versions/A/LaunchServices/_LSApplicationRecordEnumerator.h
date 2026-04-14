@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {
    NSURL *_volumeURL;
    unsigned long long _options;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _bundleIdentifiersOrUnits;
    unsigned int _container;
}

@property unsigned int bundleClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (BOOL)_getContainer:(unsigned int *)a0 context:(struct LSContext { id x0; } *)a1 error:(id *)a2;
- (id).cxx_construct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (BOOL)_enumerateAllBundles;
- (id)_applicationRecordWithContext:(struct LSContext { id x0; } *)a0 bundleIdentifierOrUnit:(unsigned int)a1;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 volumeURL:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;

@end
