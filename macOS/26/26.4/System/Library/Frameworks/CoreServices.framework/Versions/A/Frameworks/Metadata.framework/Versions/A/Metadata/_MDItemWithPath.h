@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (unsigned long long)_cfTypeID;
- (void)finalize;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
