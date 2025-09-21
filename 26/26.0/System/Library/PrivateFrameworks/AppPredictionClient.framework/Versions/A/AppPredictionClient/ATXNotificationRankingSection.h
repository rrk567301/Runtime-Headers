@class NSArray, ATXNotificationRankingFeatureSet;

@interface ATXNotificationRankingSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *userNotifications;
@property (readonly, nonatomic) ATXNotificationRankingFeatureSet *featureSet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserNotifications:(id)a0 featureSet:(id)a1;

@end
