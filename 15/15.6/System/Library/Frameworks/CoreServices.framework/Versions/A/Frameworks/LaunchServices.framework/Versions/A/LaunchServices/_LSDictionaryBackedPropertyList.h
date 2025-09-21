@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary *_plist;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (char)_getPropertyList:(id *)a0;
- (char)_getValue:(id *)a0 forPropertyListKey:(id)a1;

@end
