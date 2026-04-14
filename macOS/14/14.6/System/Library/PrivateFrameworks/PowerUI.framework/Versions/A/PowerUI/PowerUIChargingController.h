@class NSDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int chargingStateNotification;
@property (retain, nonatomic) NSDictionary *stateDescriptions;
@property (nonatomic) unsigned long long currentControllerClientState;
@property (nonatomic) unsigned long long lastChargingStatus;
@property (nonatomic) unsigned long long lastInflowStatus;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)status;
- (void)resetState;
- (BOOL)disableCharging;
- (BOOL)disableChargingWithClientState:(unsigned long long)a0;
- (BOOL)clientEnableInflow;
- (BOOL)clientInhibitInflow;
- (BOOL)enableCharging;
- (BOOL)enableChargingWithClientState:(unsigned long long)a0;
- (struct PowerUIControllerChargingStatus { BOOL x0; BOOL x1; })lastChargeStatus;
- (void)overrideLastChargingStatus;
- (id)readNumberForPreferenceKey:(id)a0;
- (BOOL)setChargingStatus:(BOOL)a0;
- (BOOL)setInflowInhibitStatus:(BOOL)a0;
- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;
- (BOOL)shouldPriortizeDecisionForClientState:(unsigned long long)a0;

@end
