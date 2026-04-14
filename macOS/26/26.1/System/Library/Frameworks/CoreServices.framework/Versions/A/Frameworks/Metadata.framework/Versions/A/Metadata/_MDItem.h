@interface _MDItem : NSObject <NSCopying> {
    unsigned int _rc;
    unsigned int _storeTag;
    long long _oid;
    unsigned int _contentTypeUnique;
    unsigned int _textEncodingHint;
}

+ (void)initialize;

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)finalize;
- (unsigned long long)_cfTypeID;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (long long)_oid;
- (unsigned int)_storeTag;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1;

@end
