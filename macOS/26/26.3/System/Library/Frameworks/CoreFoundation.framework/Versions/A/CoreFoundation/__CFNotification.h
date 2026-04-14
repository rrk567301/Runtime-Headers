@interface __CFNotification : NSNotification <NSCopying> {
    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
}

- (id)object;
- (id)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)userInfo;
- (id)initWithName:(struct __CFString { } *)a0 object:(const void *)a1 userInfo:(struct __CFDictionary { } *)a2 foundation:(BOOL)a3;

@end
