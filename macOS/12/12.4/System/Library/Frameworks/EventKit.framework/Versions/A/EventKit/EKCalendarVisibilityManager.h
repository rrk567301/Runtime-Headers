@class NSArray;

@interface EKCalendarVisibilityManager : NSObject

@property (readonly, nonatomic) NSArray *visibleCalendars;
@property (readonly, nonatomic) NSArray *invisibleCalendarsForAllIdentities;

- (id)initWithEventStore:(id)a0 visibilityChangedCallback:(id /* block */)a1;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2;

@end
