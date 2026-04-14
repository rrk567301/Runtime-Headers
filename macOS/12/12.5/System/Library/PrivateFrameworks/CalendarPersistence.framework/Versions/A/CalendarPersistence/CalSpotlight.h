@interface CalSpotlight : NSObject

+ (id)managedCalendarItemResultsForCalMDQuery:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 context:(id)a3;
+ (id)newCalMDQueryForMDQueryString:(id)a0 calendars:(id)a1;
+ (struct __MDQuery { } *)newQueryForMDQueryString:(id)a0 calendars:(id)a1;
+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery { } *)a0 context:(id)a1;
+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery { } *)a0 startIndex:(long long)a1 context:(id)a2;
+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery { } *)a0 startIndex:(long long)a1 endIndex:(long long)a2 context:(id)a3;
+ (id)mdQueryStringForIndexSearchElement:(id)a0;
+ (id)managedCalendarItemsMatchingMDQueryString:(id)a0 calendars:(id)a1 context:(id)a2;

@end
