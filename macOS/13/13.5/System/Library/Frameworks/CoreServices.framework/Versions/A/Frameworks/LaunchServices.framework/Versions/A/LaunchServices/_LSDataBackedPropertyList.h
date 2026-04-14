@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_plistData;
    _LSPlistHint *_plistHint;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prewarm;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)_plistHint;
- (void)detach;
- (id)initWithPropertyListData:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;

@end
