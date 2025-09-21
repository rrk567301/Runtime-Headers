@class NSString;

@interface AISShieldFlowContext : NSObject <AISShieldFlowContextProtocol, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) char forceOfferAgeRangePicker;
@property (nonatomic) char skipConnectToFamily;
@property (nonatomic) char skipSetupWithGuardian;
@property (nonatomic) char shouldNotDismiss;
@property (nonatomic) unsigned long long setupSelfFlow;
@property (nonatomic) unsigned long long setupLaterFlow;
@property (nonatomic) long long signInFlowType;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
