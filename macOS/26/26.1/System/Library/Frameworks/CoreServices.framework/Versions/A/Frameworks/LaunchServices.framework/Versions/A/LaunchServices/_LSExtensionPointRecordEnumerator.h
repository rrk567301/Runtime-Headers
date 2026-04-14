@class LSApplicationRecord, NSString;

@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator {
    NSString *_extensionPointID;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _extensionIDs;
}

@property (retain) LSApplicationRecord *parentApplicationRecord;

- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (id).cxx_construct;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
