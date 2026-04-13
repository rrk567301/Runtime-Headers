@interface _MDItem : NSObject <NSCopying> {
    unsigned int _rc;
    unsigned int _storeTag;
    long long _oid;
    unsigned int _contentTypeUnique;
    unsigned int _textEncodingHint;
}

+ (void)initialize;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (unsigned long long)_cfTypeID;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1;
- (unsigned int)_storeTag;
- (long long)_oid;

@end
