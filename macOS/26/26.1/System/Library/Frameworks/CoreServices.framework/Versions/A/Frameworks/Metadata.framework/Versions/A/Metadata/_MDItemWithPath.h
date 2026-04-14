@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)finalize;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
