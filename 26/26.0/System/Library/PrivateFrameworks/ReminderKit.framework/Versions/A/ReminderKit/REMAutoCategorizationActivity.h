@class NSDictionary;

@interface REMAutoCategorizationActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *reminderIDsByListID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)activityByMergingWithActivity:(id)a0;
- (id)activityBySubtractingActivity:(id)a0;
- (id)initWithListID:(id)a0 reminderIDs:(id)a1;
- (id)initWithReminderIDsByListID:(id)a0;
- (id)reminderIDsForListID:(id)a0;

@end
