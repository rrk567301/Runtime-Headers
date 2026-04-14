@class NSString, NSDate;

@interface IADataPluginNotificationEvent : NSObject

@property (retain) NSString *uid;
@property (retain) NSString *pluginID;
@property (retain) NSString *eventType;
@property (retain) NSDate *date;

+ (id)eventForPlugin:(id)a0 uid:(id)a1 eventType:(id)a2 date:(id)a3;

- (void).cxx_destruct;
- (id)description;

@end
