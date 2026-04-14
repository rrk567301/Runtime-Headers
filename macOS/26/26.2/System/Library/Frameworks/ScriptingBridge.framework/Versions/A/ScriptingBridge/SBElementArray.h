@class SBObject;

@interface SBElementArray : NSMutableArray {
    SBObject *_parent;
    unsigned int _elementCode;
    void *_reserved;
}

- (id)initWithContentsOfFile:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (void)removeLastObject;
- (id)initWithCoder:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithObjects:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_parent;
- (id)allObjects;
- (id)filteredArrayUsingPredicate:(id)a0;
- (void)removeObject:(id)a0;
- (Class)elementClass;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)lastObject;
- (void)addObject:(id)a0;
- (id)description;
- (void)_setParent:(id)a0;
- (id)get;
- (id)init;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)filterUsingPredicate:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)objectWithName:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)arrayByApplyingSelector:(SEL)a0;
- (id)objectWithID:(id)a0;
- (void)removeObjectWithID:(id)a0;
- (id)_context;
- (id)_filteredArrayUsingPredicate:(id)a0;
- (id)arrayByApplyingSelector:(SEL)a0 withObject:(id)a1;
- (id)descriptorForExpression:(id)a0;
- (unsigned int)elementCode;
- (id)initWithParent:(id)a0 elementCode:(unsigned int)a1;
- (id)objectAtLocation:(id)a0;
- (id)objectWithKeyForm:(unsigned int)a0 keyData:(id)a1;
- (id)qualifiedSpecifier;
- (void)removeObjectWithName:(id)a0;

@end
