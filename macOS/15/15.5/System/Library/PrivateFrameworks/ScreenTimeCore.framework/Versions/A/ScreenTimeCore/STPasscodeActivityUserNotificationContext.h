@class NSString, NSDate, NSNumber, NSLocale;

@interface STPasscodeActivityUserNotificationContext : STUserNotificationContext

@property (readonly, copy) NSString *deviceName;
@property (readonly, copy) NSDate *lastPasscodeUseDate;
@property (readonly, copy) NSNumber *childDSID;
@property (copy) NSLocale *locale;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithDeviceName:(id)a0 lastPasscodeUseDate:(id)a1 childDSID:(id)a2;

@end
