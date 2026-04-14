@interface EKEventActionHandler : NSObject

+ (id)sharedInstance;
+ (id)_displayStringForDate:(id)a0;
+ (id)_logHandle;

- (id)createEventIntentForEvent:(id)a0 withSuggestionsInfoUniqueKey:(id)a1;
- (void)removeInteractionsForCalendar:(id)a0;
- (void)prepareForEventUpdate:(id)a0;
- (void)donatePredictiveAction:(id)a0 forEvent:(id)a1;
- (void)handleEventUpdate:(id)a0;
- (void)handleEventCreation:(id)a0;
- (id)createEventIntentForEvent:(id)a0;
- (void)donateInteractionForAction:(id)a0 onEvent:(id)a1;
- (void)handleEventDeletion:(id)a0;
- (id)_intentForAction:(id)a0 onEvent:(id)a1;

@end
