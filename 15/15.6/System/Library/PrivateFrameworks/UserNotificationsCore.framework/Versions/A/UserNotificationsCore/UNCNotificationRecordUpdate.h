@class UNSNotificationRecord;

@interface UNCNotificationRecordUpdate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord;
@property (readonly, nonatomic) char shouldSync;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithNotificationRecord:(id)a0 shouldSync:(char)a1;

@end
