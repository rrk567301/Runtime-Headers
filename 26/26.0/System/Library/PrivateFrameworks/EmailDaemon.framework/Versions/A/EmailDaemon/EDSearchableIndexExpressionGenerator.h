@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSearchableIndexExpressionGenerator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_comparisonOperationMatchingValue:(id)a0 operatorType:(unsigned long long)a1;
+ (BOOL)_keyPathIsSuggestable:(id)a0;
+ (id)_operandStringForCompoundPredicateType:(unsigned long long)a0;
+ (id)_queryWithAttributes:(id)a0 matchingValue:(id)a1 operatorType:(unsigned long long)a2;
+ (id)expressionForPredicate:(id)a0 suggestion:(id)a1 bundleID:(id)a2 nonSpotlightPredicates:(id *)a3;
+ (id)queryStringByJoiningQueries:(id)a0 withPredicateType:(unsigned long long)a1;
+ (id)searchableIndexQueryStringForComparisionPredicate:(id)a0 hasSuggestion:(BOOL)a1;


@end
