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

- (void)finalize;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
