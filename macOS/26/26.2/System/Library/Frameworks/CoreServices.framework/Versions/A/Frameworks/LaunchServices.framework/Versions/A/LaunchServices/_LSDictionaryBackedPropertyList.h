@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (id)initWithPropertyList:(id)a0;

@end
