@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)finalize;
- (unsigned long long)_cfTypeID;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
