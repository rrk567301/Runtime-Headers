@interface RTBluePOIHelper : NSObject

+ (BOOL)insideBusinessHours:(id)a0 date:(id)a1 timeZone:(id)a2;
+ (BOOL)shouldFilterByBusinessHours:(BOOL)a0;
+ (double)weightBasedOnBusinessHours:(id)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 metrics:(id)a4;
+ (double)weightBasedOnDurationWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 poiCategory:(id)a3;

@end
