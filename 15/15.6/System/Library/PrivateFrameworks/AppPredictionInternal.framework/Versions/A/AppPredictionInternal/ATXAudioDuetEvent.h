@class NSString, NSNumber;

@interface ATXAudioDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long audioState;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSNumber *routeChangeReason;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAudioState:(long long)a0 deviceIdentifier:(id)a1 portType:(id)a2 portName:(id)a3 routeChangeReason:(id)a4 startDate:(id)a5 endDate:(id)a6;
- (id)initWithCurrentContextStoreValues;

@end
