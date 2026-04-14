@class LSApplicationRecord, NSString;

@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator {
    NSString *_extensionPointID;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct { unsigned int *__cap_; } ; } _extensionIDs;
}

@property (retain) LSApplicationRecord *parentApplicationRecord;

- (void).cxx_destruct;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id).cxx_construct;

@end
