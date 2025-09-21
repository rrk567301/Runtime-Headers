@interface CNDateComponentsEquivalence : NSObject

+ (char)isCalendar:(id)a0 equivalentToCalendar:(id)a1;
+ (char)isComponent:(long long)a0 equivalentToComponent:(long long)a1;
+ (char)canUnifyComponents:(id)a0 withComponents:(id)a1;

@end
