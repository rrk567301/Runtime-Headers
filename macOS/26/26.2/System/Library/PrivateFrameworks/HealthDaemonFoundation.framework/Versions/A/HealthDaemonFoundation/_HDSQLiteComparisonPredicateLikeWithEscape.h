@class NSString;

@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate

@property (readonly, nonatomic) NSString *escapeCharacter;

- (id)SQLForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 value:(id)a1 escapeCharacter:(id)a2;

@end
