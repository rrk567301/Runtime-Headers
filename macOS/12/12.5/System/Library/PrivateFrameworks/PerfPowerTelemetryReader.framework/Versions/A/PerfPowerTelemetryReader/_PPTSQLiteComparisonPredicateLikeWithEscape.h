@class NSString;

@interface _PPTSQLiteComparisonPredicateLikeWithEscape : PPTSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *escapeCharacter;

- (void).cxx_destruct;
- (id)sqlForEntity:(id)a0;
- (id)initWithProperty:(id)a0 value:(id)a1 escapeCharacter:(id)a2;

@end
