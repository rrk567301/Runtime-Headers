@class NSString, NSMutableArray;

@interface XQueryExprList : NSMutableArray <XQueryExprBehavior> {
    NSMutableArray *_array;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exprList;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)evaluateWithContext:(id)a0;
- (void)bindInfoForProlog:(id)a0;

@end
