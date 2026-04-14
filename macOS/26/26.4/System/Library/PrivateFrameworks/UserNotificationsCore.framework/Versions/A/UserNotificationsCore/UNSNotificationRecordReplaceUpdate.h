@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNCNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord;
@property (readonly, nonatomic) BOOL shouldRepost;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

@end
