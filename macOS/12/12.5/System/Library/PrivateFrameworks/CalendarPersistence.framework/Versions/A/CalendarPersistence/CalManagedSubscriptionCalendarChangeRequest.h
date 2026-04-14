@class NSString;

@interface CalManagedSubscriptionCalendarChangeRequest : CalManagedCalendarChangeRequest

@property (retain) NSString *subscriptionURLString;
@property BOOL hasAlarmFilter;
@property BOOL hasAttachmentFilter;
@property BOOL hasTaskFilter;
@property int refreshInterval;
@property (retain) NSString *locationCode;
@property (retain) NSString *languageCode;
@property BOOL isAutoProvisioned;

+ (id)insertSubscriptionCalendarChangeRequestWithType:(int)a0 sourceUID:(id)a1 uri:(id)a2 inManagedObjectContext:(id)a3;

@end
