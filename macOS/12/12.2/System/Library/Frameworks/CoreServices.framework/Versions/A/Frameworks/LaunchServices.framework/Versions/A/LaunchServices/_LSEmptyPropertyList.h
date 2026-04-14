@interface _LSEmptyPropertyList : _LSLazyPropertyList

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;

@end
