@class NSURL, NSString;

@interface CalCalendarMigrationSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSURL *calendarDirectory;
@property (readonly, nonatomic) NSString *principalUid;
@property (readonly, nonatomic) NSString *subscriptionURL;
@property (readonly, nonatomic) NSString *subscriptionURLWithUsername;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isManagedByServer;
@property (nonatomic) char insecureConnectionApproved;
@property (retain, nonatomic) NSString *calDAVPath;
@property (nonatomic) char filterAlarms;
@property (nonatomic) char disableAlarms;
@property (nonatomic) char filterAttachments;
@property (nonatomic) double refreshInterval;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)_dictionaryForAccountProperties;
- (id)dictionaryForAccountProperties;
- (id)dictionaryForParentAccountProperties;
- (id)initWithCalendarDirectory:(id)a0 subscriptionURL:(id)a1 username:(id)a2 principalUid:(id)a3;

@end
