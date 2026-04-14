@class NSString, NSDictionary, NSImage, NSDate, NSDateComponents, NSArray;

@interface EKNotificationInfo : NSObject

@property BOOL isForBirthday;
@property BOOL isForToday;
@property BOOL isForTomorrow;
@property BOOL isInvitation;
@property BOOL isForReminders;
@property BOOL isForCalendar;
@property BOOL displayEventCountdown;
@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (retain) NSString *informativeText;
@property (retain) NSDictionary *userInfo;
@property (retain) NSDate *eventDate;
@property (retain) NSDateComponents *deliveryExpiration;
@property (retain) NSDateComponents *duration;
@property (retain) NSImage *image;
@property (retain) NSArray *peopleIdentifiers;
@property BOOL hasActionButton;
@property (retain) NSString *actionButtonTitle;
@property (retain) NSString *otherButtonTitle;
@property (retain) NSArray *additionalActions;
@property unsigned long long coalseceCount;

- (void).cxx_destruct;

@end
