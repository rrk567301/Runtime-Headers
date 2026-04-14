@interface CUIKIntentDonation : NSObject

+ (void)donateOpenEventDetailWithEvent:(id)a0;
+ (void)donateCreateEventIntentWithEvent:(id)a0;
+ (void)donateDeleteCalendarIntentWithCalendar:(id)a0 reportJunk:(BOOL)a1;
+ (void)donateDeletionEventIntentWithEvent:(id)a0 span:(long long)a1;
+ (void)donateEditEventIntentWithOriginalEvent:(id)a0 newEvent:(id)a1 span:(long long)a2;
+ (void)donateOpenCalendarEditorWithCalendar:(id)a0;
+ (void)donateOpenEventEditorIntentWithEvent:(id)a0;

- (id)init;

@end
