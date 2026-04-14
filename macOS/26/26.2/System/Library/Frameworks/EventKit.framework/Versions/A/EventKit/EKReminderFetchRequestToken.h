@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>

@property (readonly, weak, nonatomic) EKReminderStore *reminderStore;

- (void)cancel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithReminderStore:(id)a0;

@end
