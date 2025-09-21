@class NSDictionary;

@interface ATXNotificationContextResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int notificationSenderImportance;
@property (readonly, nonatomic) double importanceConfidenceScore;
@property (readonly, nonatomic) NSDictionary *notificationFeatureDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationSenderImportance:(int)a0 importanceConfidenceScore:(double)a1 notificationFeatureDictionary:(id)a2;

@end
