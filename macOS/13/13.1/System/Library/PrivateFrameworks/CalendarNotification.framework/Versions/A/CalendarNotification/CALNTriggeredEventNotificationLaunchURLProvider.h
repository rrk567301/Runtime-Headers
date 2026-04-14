@interface CALNTriggeredEventNotificationLaunchURLProvider : NSObject

+ (id)launchURLForOptionalEventID:(id)a0 hypothesis:(id)a1 isTravelLaunchURL:(BOOL *)a2;
+ (id)launchURLForOptionalEventOccurrenceID:(id)a0;
+ (id)_launchURLForEventID:(id)a0 hypothesis:(id)a1 isTravelLaunchURL:(BOOL *)a2;
+ (id)_travelLaunchURLForEventID:(id)a0 hypothesis:(id)a1;

@end
