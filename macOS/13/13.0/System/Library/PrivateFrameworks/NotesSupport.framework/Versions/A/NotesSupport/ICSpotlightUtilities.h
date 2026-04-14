@interface ICSpotlightUtilities : NSObject

+ (id)stringByEscapingSearchString:(id)a0;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (unsigned long long)rankingQueryLimit;
+ (id)queryFields;
+ (id)userActivityPersistentIdentifierForNote:(id)a0;

@end
