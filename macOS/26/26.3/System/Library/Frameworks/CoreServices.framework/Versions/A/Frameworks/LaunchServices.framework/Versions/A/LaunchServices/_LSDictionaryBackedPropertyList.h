@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithPropertyList:(id)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
