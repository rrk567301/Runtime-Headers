@class UNSNotificationRecord;

@interface UNCNotificationRecordUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord;
@property (readonly, nonatomic) BOOL shouldSync;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithNotificationRecord:(id)a0 shouldSync:(BOOL)a1;

@end
