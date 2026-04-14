@class SBObject;

@interface SBElementArray : NSMutableArray {
    SBObject *_parent;
    unsigned int _elementCode;
    void *_reserved;
}

- (id)initWithContentsOfURL:(id)a0;
- (id)_parent;
- (id)get;
- (unsigned long long)count;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)debugDescription;
- (id)initWithObjects:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (id)objectsAtIndexes:(id)a0;
- (void)_setParent:(id)a0;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)allObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)lastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (id)objectWithName:(id)a0;
- (void)addObject:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeLastObject;
- (id)filteredArrayUsingPredicate:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (Class)elementClass;
- (void)removeObject:(id)a0;
- (id)arrayByApplyingSelector:(SEL)a0;
- (void)filterUsingPredicate:(id)a0;
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
