@interface __CFNotification : NSNotification <NSCopying> {
    id _name;
    id _object;
    id _userInfo;
    char _fouSemantics;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (id)initWithName:(struct __CFString { } *)a0 object:(const void *)a1 userInfo:(struct __CFDictionary { } *)a2 foundation:(char)a3;
- (id)object;
- (id)userInfo;

@end
