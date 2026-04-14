@interface __CFNotification : NSNotification <NSCopying> {
    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)object;
- (id)name;
- (id)userInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(struct __CFString { } *)a0 object:(const void *)a1 userInfo:(struct __CFDictionary { } *)a2 foundation:(BOOL)a3;

@end
