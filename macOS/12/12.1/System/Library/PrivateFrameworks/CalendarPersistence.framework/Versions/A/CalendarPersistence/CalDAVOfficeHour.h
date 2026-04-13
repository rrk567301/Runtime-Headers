@class CALDate;

@interface CalDAVOfficeHour : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enabled;
@property unsigned long long weekday;
@property (copy) CALDate *startDate;
@property (copy) CALDate *endDate;

+ (id)officeHoursFromData:(id)a0;
+ (id)dataFromOfficeHours:(id)a0;
+ (void)getOfficeHoursForAccountInfoProvider:(id)a0 principal:(id)a1 inboxURL:(id)a2 taskManager:(id)a3 andCompletionBlock:(id /* block */)a4;
+ (void)_updatePrincipal:(id)a0 withOfficeHours:(id)a1 fromTaskGroup:(id)a2;
+ (id)officeHoursFromICS:(id)a0;
+ (id)icsFromOfficeHours:(id)a0;
+ (void)getOfficeHoursForPrincipalObjectIDString:(id)a0 andCompletionBlock:(id /* block */)a1;
+ (void)setOfficeHoursForPrincipalObjectIDString:(id)a0 officeHours:(id)a1 completion:(id /* block */)a2;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
