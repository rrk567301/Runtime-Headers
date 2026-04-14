@interface _MDItem : NSObject <NSCopying> {
    unsigned int _rc;
    unsigned int _storeTag;
    long long _oid;
    unsigned int _contentTypeUnique;
    unsigned int _textEncodingHint;
}

+ (void)initialize;

- (unsigned long long)_cfTypeID;
- (void)finalize;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (long long)_oid;
- (unsigned int)_storeTag;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1;

@end
