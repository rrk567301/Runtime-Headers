@class NSString, NSNumber, NSData;

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext

@property (retain, nonatomic) NSString *notificationBodyKey;
@property (nonatomic) double deltaScreenTimeUsage;
@property (copy, nonatomic) NSNumber *totalOrAverageUsage;
@property (retain, nonatomic) NSData *weeklyReportData;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setDeltaScreenTimeUsage:(double)a0 totalOrAverageUsage:(id)a1 isLegacyOS:(BOOL)a2;

@end
