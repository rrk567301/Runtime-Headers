@class ATXUserNotificationDigest;

@interface _ATXActiveDigestsTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotificationDigest *activeUpcomingDigest;
@property (readonly, nonatomic) ATXUserNotificationDigest *activeScheduledDigest;
@property (readonly, nonatomic) ATXUserNotificationDigest *justCompletedDigest;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithActiveUpcomingDigest:(id)a0 activeScheduledDigest:(id)a1 justCompletedDigest:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviousTuple:(id)a0 nextDigestEvent:(id)a1;

@end
