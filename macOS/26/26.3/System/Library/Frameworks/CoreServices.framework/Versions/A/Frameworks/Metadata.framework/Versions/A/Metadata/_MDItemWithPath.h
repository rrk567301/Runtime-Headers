@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (void)finalize;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
