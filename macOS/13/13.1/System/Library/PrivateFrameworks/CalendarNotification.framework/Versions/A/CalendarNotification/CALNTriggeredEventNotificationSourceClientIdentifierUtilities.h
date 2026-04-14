@interface CALNTriggeredEventNotificationSourceClientIdentifierUtilities : NSObject

+ (id)_characterSetForEncodingIdentifierComponents;
+ (id)sourceClientIdentifierForEventID:(id)a0 alarmID:(id)a1;
+ (id)alarmIDForSourceClientIdentifier:(id)a0;
+ (id)eventIDForSourceClientIdentifier:(id)a0;
+ (void)eventID:(id *)a0 andAlarmID:(id *)a1 fromSourceClientIdentifier:(id)a2;

@end
