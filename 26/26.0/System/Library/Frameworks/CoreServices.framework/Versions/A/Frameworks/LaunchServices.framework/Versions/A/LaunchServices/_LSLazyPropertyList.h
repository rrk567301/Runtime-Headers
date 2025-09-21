@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)lazyPropertyListWithDatabase:(id)a0 unit:(unsigned int)a1;
+ (id)lazyPropertyListWithContext:(struct LSContext { id x0; } *)a0 unit:(unsigned int)a1;

- (void)prewarm;
- (id)objectsForKeys:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (void)detach;
- (id)objectForKey:(id)a0 checkingKeyClass:(Class)a1 checkingValueClass:(Class)a2;
- (id)_expensiveDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;

@end
