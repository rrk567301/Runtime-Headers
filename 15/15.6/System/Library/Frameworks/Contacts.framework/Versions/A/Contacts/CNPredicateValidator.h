@class NSSet, NSArray, NSMutableSet, NSError, NSPredicate;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor>

@property (retain, nonatomic) NSSet *allowedKeysSet;
@property (retain, nonatomic) NSMutableSet *usedKeysSet;
@property (nonatomic) char validated;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *allowedKeys;
@property (readonly, copy, nonatomic) NSArray *usedKeys;

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (char)validateWithError:(id *)a0;
- (void)resetUsedKeys;

@end
