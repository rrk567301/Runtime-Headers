@class NSTimeZone, NSString, NSURL, NSDate;

@interface PKUserNotificationReceipt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *notificationIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *accountBaseURL;
@property (retain, nonatomic) NSDate *dateScheduled;
@property (retain, nonatomic) NSTimeZone *scheduledTimeZone;
@property (retain, nonatomic) NSDate *dateDelivered;
@property (retain, nonatomic) NSTimeZone *deliveredTimeZone;
@property (retain, nonatomic) NSString *messageTitle;
@property (retain, nonatomic) NSString *messageSubtitle;
@property (retain, nonatomic) NSString *messageBody;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_formattedHeader;
- (BOOL)eligibleForReporting;
- (id)eventDetailsDictionary;
- (id)initWithNotificationIdentifier:(id)a0 accountIdentifier:(id)a1 accountBaseURL:(id)a2;
- (void)setDateDelivered:(id)a0 withTimeZone:(id)a1;
- (void)setDateScheduled:(id)a0 withTimeZone:(id)a1;

@end
