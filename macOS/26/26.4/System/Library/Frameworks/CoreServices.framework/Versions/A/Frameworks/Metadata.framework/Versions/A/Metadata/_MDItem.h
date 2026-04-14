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
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)description;
- (oneway void)release;
- (unsigned long long)retainCount;
- (long long)_oid;
- (unsigned int)_storeTag;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1;

@end
