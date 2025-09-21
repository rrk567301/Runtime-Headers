@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (void)finalize;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
