@interface PCContextAnnotationUtilities : NSObject

+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1;
+ (id)annotateEventBundle:(id)a0 visitEvents:(id)a1;
+ (id)extractActivityType:(id)a0;
+ (id)groupedEventsFromEvents:(id)a0 nestedPropertyPath:(id)a1;
+ (id)groupedEventsFromEvents:(id)a0 propertyPath:(id)a1;
+ (id)predicateWithStartDate:(id)a0 endDate:(id)a1 distanceThreshold:(double)a2;

@end
