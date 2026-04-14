@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (unsigned long long)_cfTypeID;
- (void)finalize;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (oneway void)release;
- (void)dealloc;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
