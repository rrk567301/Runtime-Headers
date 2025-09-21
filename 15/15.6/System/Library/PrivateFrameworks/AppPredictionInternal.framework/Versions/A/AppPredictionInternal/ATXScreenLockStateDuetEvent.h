@interface ATXScreenLockStateDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long screenLockState;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCurrentContextStoreValues;
- (id)initWithScreenLockState:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end
