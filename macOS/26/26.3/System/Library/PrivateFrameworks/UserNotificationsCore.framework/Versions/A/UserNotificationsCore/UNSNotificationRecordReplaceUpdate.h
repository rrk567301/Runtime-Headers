@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNCNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord;
@property (readonly, nonatomic) BOOL shouldRepost;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

@end
