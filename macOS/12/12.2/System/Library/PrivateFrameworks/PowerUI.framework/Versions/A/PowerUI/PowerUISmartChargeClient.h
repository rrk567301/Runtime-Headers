@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)status;
- (id)initWithClientName:(id)a0;
- (BOOL)setState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isOBCSupported;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)isOBCEngagedWithHandler:(id /* block */)a0;
- (void)enterDevelopmentMode;
- (void)resetDevelopmentMode;
- (void)forceModelUpdate;
- (BOOL)isOBCEngaged:(BOOL *)a0 asDesktopDevice:(BOOL *)a1 chargingOverrideAllowed:(BOOL *)a2 withError:(id *)a3;
- (void)isOBCEngagedAsDesktopDeviceWithHandler:(id /* block */)a0;
- (unsigned long long)isSmartChargingCurrentlyEnabled:(id *)a0;
- (BOOL)disableSmartCharging:(id *)a0;
- (void)disableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)temporarilyDisableSmartCharging:(id *)a0;
- (void)temporarilyDisableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)enableSmartCharging:(id *)a0;
- (void)enableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)temporarilyEnableCharging:(id *)a0;
- (void)temporarilyEnableChargingWithHandler:(id /* block */)a0;
- (BOOL)isOBCEngagedAsDesktopDevice:(BOOL *)a0 chargingOverrideAllowed:(BOOL *)a1 withError:(id *)a2;
- (BOOL)isOBCEngaged:(id *)a0;
- (id)fullChargeDeadline:(id *)a0;
- (id)powerLogStatus;
- (id)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withError:(id *)a2;
- (id)lastUsedLeewayWithError:(id *)a0;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3;
- (void)resetEngagementOverride;
- (BOOL)setChargingStatus:(BOOL)a0;
- (BOOL)setDesktopMode:(id)a0;
- (void)resetDesktopMode;

@end
