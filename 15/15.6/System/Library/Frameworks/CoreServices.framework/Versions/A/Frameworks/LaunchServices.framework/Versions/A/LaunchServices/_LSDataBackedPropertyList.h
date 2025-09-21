@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_rawPlistData;
    _LSPlistHint *_plistHint;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)prewarm;
- (char)_getPropertyList:(id *)a0;
- (char)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)_plistHint;
- (void)detach;
- (id)initWithPropertyListData:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;

@end
