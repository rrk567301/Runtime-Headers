@interface CUIKOverlayCalendar : NSObject

+ (id)currentOverlayCalendarNoCaching;
+ (id)overlayCalendar;
+ (void)invalidateOverlayCalendar;
+ (id)overlayCalendarForCalendarIdentifier:(id)a0 timezone:(id)a1;
+ (id)overlayCalendarID;

@end
