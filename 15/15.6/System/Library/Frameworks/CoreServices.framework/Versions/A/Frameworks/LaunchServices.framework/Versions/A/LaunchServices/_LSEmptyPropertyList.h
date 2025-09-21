@interface _LSEmptyPropertyList : _LSLazyPropertyList

+ (id)sharedInstance;
+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_getPropertyList:(id *)a0;
- (char)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)uncheckedObjectsForKeys:(id)a0;

@end
