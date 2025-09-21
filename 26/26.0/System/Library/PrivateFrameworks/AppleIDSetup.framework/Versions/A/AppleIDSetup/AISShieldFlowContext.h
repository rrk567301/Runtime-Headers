@class NSString;

@interface AISShieldFlowContext : NSObject <AISShieldFlowContextProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) BOOL forceOfferAgeRangePicker;
@property (nonatomic) BOOL skipConnectToFamily;
@property (nonatomic) BOOL skipSetupWithGuardian;
@property (nonatomic) BOOL shouldNotDismiss;
@property (nonatomic) unsigned long long setupSelfFlow;
@property (nonatomic) unsigned long long setupLaterFlow;
@property (nonatomic) long long signInFlowType;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
