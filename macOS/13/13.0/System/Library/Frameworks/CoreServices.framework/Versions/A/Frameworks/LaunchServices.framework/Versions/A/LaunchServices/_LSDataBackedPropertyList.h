@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_plistData;
    _LSPlistHint *_plistHint;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)detach;
- (id)uncheckedObjectsForKeys:(id)a0;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void)prewarm;
- (id)initWithPropertyListData:(id)a0;
- (id)_plistHint;

@end
