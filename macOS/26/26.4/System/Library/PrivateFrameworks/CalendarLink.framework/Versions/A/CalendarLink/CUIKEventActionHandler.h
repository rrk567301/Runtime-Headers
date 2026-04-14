@interface CUIKEventActionHandler : NSObject

+ (void)handleEventCreation:(id)a0;
+ (void)handleCalendarDeletion:(id)a0 reportJunk:(BOOL)a1;
+ (void)handleEventDeletion:(id)a0 span:(long long)a1;
+ (void)handleEventUpdate:(id)a0 span:(long long)a1;
+ (void)handleOpenCalendarEditor:(id)a0;
+ (void)handleOpenEventDetails:(id)a0;
+ (void)handleOpenEventEditor:(id)a0;

@end
