@interface CNLDAPQueryFilter : NSObject

+ (id)filterWithSearchString:(id)a0;
+ (id)defaultSearchAttributes;
+ (id)filterWithSearchString:(id)a0 attributes:(id)a1;
+ (id)tokensFromQueryString:(id)a0;
+ (id)filterStringWithSearchTerm:(id)a0 attributes:(id)a1;
+ (id)filterStringWithOperator:(id)a0 clauses:(id)a1;

@end
