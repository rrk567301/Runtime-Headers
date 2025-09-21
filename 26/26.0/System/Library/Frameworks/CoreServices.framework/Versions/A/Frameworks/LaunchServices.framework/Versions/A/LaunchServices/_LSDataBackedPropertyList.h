@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_rawPlistData;
    _LSPlistHint *_plistHint;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)prewarm;
- (void)detach;
- (id)initWithPropertyListData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_plistHint;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)uncheckedObjectsForKeys:(id)a0;
- (void).cxx_destruct;

@end
