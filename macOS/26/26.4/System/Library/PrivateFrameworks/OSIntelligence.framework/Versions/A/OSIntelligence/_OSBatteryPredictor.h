@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSBatteryPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)predictor;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)lowSOCPredicted;
- (id)lowSOCPredictionOutput;
- (id)batteryLifeMitigationWithError:(id *)a0;
- (void)client:(id)a0 setIBLMNotificationsState:(long long)a1;
- (void)client:(id)a0 setIBLMState:(long long)a1;
- (id)highDayDrainAroundCurrentDateWithError:(id *)a0;
- (BOOL)inTypicalChargingLocation;
- (void)inTypicalChargingLocationWithHandler:(id /* block */)a0;
- (BOOL)inTypicalLocation;
- (void)inTypicalLocationWithHandler:(id /* block */)a0;
- (id)lowSOCPredictionWithError:(id *)a0;
- (void)overrideAllMitigations:(unsigned long long)a0;
- (void)overrideCLPCMitigations:(unsigned long long)a0;
- (BOOL)recommendsAutoLPMWithError:(id *)a0;
- (double)timeToEmpty;
- (id)typicalBatteryLevelWithReferenceDays:(unsigned long long)a0 aggregatedOverTimeWidth:(unsigned long long)a1 withError:(id *)a2;

@end
